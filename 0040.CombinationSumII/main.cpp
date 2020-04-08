class Solution {
public:
    void findCombination2(vector<int>& candidates, int target, vector<vector<int>>& output, vector<int>& combination, int i){

        int begin = i;
        if(target < 0) return;
        if(target == 0){
            output.push_back(combination);
            return;
        }

        while(i < candidates.size() && target - candidates[i] >= 0){
            if(i == begin || candidates[i] != candidates[i-1]){
                combination.push_back(candidates[i]);
                findCombination2(candidates, target - candidates[i], output, combination, i+1);
                combination.pop_back();
            }
            i++;
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> output;
        vector<int> combination;
        findCombination2(candidates, target, output, combination, 0);
        return output;
    }
};
