class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n = nums.size();
        if(n==1) return nums[0];

        vector<vector<int>> dp(n,vector<int> (n,0));


        int output = nums[0];


        for(int i=0;i<n;i++){
            dp[i][i] = nums[i];
            if(nums[i] > output) output = nums[i];
        }

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                dp[i][j] = dp[i][j-1]*nums[j];
                if(dp[i][j] > output) output = dp[i][j];
            }
        }


        return output;
    }
};
