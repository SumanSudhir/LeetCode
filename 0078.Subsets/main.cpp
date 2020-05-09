class Solution {
public:

    void combineMain(vector<int>& nums, vector<vector<int>>& output, vector<int>& temp, int n, int start, int k){

        if(k==0){
            output.push_back(temp);
            return;
        }

        for(int i=start; i<n; i++){
            temp.push_back(nums[i]);
            combineMain(nums, output, temp, n, i+1, k-1);
            temp.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> temp;
        output.push_back(temp);
        for(int i=1; i<=nums.size(); i++){
            combineMain(nums,output,temp,nums.size(),0,i);
        }

        return output;
    }
};
