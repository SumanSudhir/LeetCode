class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();
        int prev_sum = INT_MIN;
        int curr_sum = 0;
        for(int i=0; i<n; i++){

            if(curr_sum < 0 && nums[i] > curr_sum) curr_sum = 0;
            curr_sum += nums[i];
            if(prev_sum < curr_sum) prev_sum = curr_sum;
        }

        return prev_sum;
    }
};
