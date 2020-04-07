class Solution {
public:
    int binarySearch(vector<int>& nums, int start, int stop, int target){
        if(start > stop) return start;
        int mid = (start + stop)/2;
        if(target == nums[mid]) return mid;
        if(target < nums[mid]) return binarySearch(nums, start, mid-1, target);

        return binarySearch(nums, mid+1, stop, target);
    }

    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int index = binarySearch(nums, 0, n-1, target);

        return index;
    }
};
