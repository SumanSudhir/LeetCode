class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int min = abs(nums[0] + nums[1] + nums[2] - target);
        int output = 0;

        for(int i=0;i<n-2;i++){
            int l = i+1;
            int r = n-1;

            while(l<r){
                int sum = nums[i] + nums[l] + nums[r];
                if(sum < target) l++;
                else if(sum > target) r--;
                else return target;
                if(min >= abs(sum - target)){
                    min = abs(sum - target);
                    output = sum;
                    cout<<min<<" ";
                }
            }
        }
        return output;
    }
};
