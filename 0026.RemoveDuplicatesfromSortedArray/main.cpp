class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if(nums.size() == 0) return 0;
        int count = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i-1] == nums[i]){
                nums.erase(nums.begin() + i);
                i--;
                n--;
                continue;
            }
            count++;
        }
        return count;
    }
};
