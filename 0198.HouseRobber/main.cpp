class Solution {
public:
    int rob(vector<int>& nums) {

        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];

        int pre_prev = nums[0];
        int prev = max(nums[0],nums[1]);

        for(int i=2;i<nums.size();i++){
            int temp = prev;
            prev = max(pre_prev + nums[i],prev);
            pre_prev = temp;
        }

       return prev;

    }
};
