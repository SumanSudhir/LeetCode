class Solution {
public:
    int binarySearch(vector<int>& nums, int start, int stop, int target){
        if(stop < start) return -1;
        int mid = (start+stop)/2;
        if(target == nums[mid]) return mid;
        else if(target < nums[mid]) return binarySearch(nums, start, mid-1, target);

        return binarySearch(nums, mid+1, stop, target);
    }

    int pivot(vector<int>& nums, int start, int stop){
        if(stop < start) return -1;
        if(start == stop) return start;
        int mid = (start+stop)/2;

        if(mid < stop && nums[mid] > nums[mid+1]) return mid;
        if(mid > start && nums[mid]  < nums[mid-1]) return mid-1;
        if(nums[start] >= nums[mid]) return pivot(nums, start, mid-1);

        return pivot(nums, mid+1, stop);
    }

    int search(vector<int>& nums, int target){
        int n = nums.size();
        int pivot_index = pivot(nums, 0, n-1);
        if(pivot_index == -1) return binarySearch(nums, 0, n-1, target);
        if(nums[pivot_index] == target) return pivot_index;
        if(nums[0] <= target) return binarySearch(nums, 0, pivot_index-1, target);
        return binarySearch(nums, pivot_index+1, n-1, target);
    }
};
