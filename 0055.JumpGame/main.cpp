class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();

        vector<bool> track(n);
        track[n-1] = true;
        int min = 1;

        for(int i=n-2; i>=0; i--){
            if(nums[i] >= min){
                min = 1;
                track[i] = true;
            }
            else{
                min++;
                track[i] = false;
            }
        }

        if(track[0] == false) return false;

        return true;
    }
};
