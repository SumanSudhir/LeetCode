class Solution {
public:
    void combineMain(vector<vector<int>>& output, vector<int>& temp, int n, int start, int k){

        if(k==0){
            output.push_back(temp);
            return;
        }

        for(int i=start; i<=n; i++){
            temp.push_back(i);
            combineMain(output, temp, n, i+1, k-1);
            temp.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> output;
        vector<int> temp;
        combineMain(output,temp, n, 1, k);
        return output;
    }
};
