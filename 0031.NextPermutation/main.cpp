class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool found = false;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i] > nums[i-1]){
                int temp = nums[i-1];
                int diff = nums[i]-temp;
                int index = i;
                for(int j=i;j<nums.size();j++){
                    if((nums[j]-temp) > 0 && (nums[j]-temp) <= diff){
                        index = j;
                        diff = nums[j]-temp;
                    }
                }
                nums[i-1] = nums[index];
                nums[index] = temp;
                found = true;
                reverse(nums.begin()+i,nums.end());
                break;
            }
        }
        if(!found) reverse(nums.begin(),nums.end());
    }
};
