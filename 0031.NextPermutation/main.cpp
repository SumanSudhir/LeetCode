class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool found = false;
        for(int i=nums.size()-1,i>0;i--){
            for(int j=i-1;j>=0;j--){
                if(nums[i] > nums[j]){
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                    found = true;
                    break;
                }
            }
        }
        if(!found) reverse(nums.begin(),nums.end());
    }
};
