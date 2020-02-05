class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> abs_sum;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int count = 0;

        for(int i=0;i<n-2;i++){
            if( i> 0 && nums[i] == nums[i-1])
                continue;
            for(int j=i+1;j<n-1;j++){
                if( j> i+1 && nums[j] == nums[j-1])
                    continue;
                for(int k=j+1;k<n;k++){
                    if( k> j+1 && nums[k] == nums[k-1])
                        continue;
                    if((nums[i]+nums[j]+nums[k]) == 0){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                            output.push_back(temp);
                            count++;
                    }
                }
            }
        }


        return output;
    }
};
