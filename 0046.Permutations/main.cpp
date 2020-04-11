class Solution {
public:
    void HeapAlgo(vector<int>& nums, int begin, vector<vector<int>>& output){

        if(begin == 1){
            output.push_back(nums);
        }

        for(int i=0; i<begin; i++){
            HeapAlgo(nums, begin-1, output);
            if(begin%2 == 0) swap(nums[i], nums[begin-1]);
            else swap(nums[0], nums[begin-1]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> output;
        int n = nums.size();

        if(n == 0){
            output.push_back(nums);
            return output;
        }

        HeapAlgo(nums,n,output);

        return output;
    }
};
