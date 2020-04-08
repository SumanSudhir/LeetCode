class Solution {
public:

    void findCombination(vector<int>& candidates, int target, vector<vector<int>> & output, vector<int> & combination,  int i){

        if(target < 0) return;
        if(target == 0){
            output.push_back(combination);
            return;
        }

        while(i < candidates.size() && target - candidates[i] >= 0){
            combination.push_back(candidates[i]);
            findCombination(candidates, target-candidates[i], output, combination, i);
            i++;
            combination.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());
        vector<vector<int>> output;
        vector<int> combination;
        findCombination(candidates, target, output, combination, 0);

        return output;
    }
};
