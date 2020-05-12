class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();
        int count = 1;
        for(int i=0; i<n; i++){
            if(i >0 && nums[i] == nums[i-1]){
                count++;

                if(count>2){
                    nums.erase(nums.begin() + i);
                    n--;
                    i--;
                }
            }

            else if(i>0 && nums[i] != nums[i-1]){
                count = 1;
            }

        }

        return nums.size();
    }
};
