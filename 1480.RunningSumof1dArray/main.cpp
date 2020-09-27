class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        vector<int> output(nums.size(),0);

        output[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            output[i] = nums[i] + output[i-1];
        }

        return output;
    }
};
