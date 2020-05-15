class Solution {

private:
    bool binarySearch(vector<int>& nums, int target, int start, int stop){

        if(start>stop) return false;
        int mid = (start+stop)/2;

        if(nums[mid]==target) return true;
        else if(target < nums[mid]) return binarySearch(nums,target,start,mid-1);
        return binarySearch(nums,target,mid+1,stop);
    }

    int pivot(vector<int>& nums, int start, int stop){
        if(start>stop) return -1;
        if(start==stop) return start;

        int mid = (start+stop)/2;
        while(start<mid){
            if(nums[start] == nums[mid]) start++;
            else break;
        }
        if(mid<stop && nums[mid]>nums[mid+1]) return mid;
        if(mid>start && nums[mid]<nums[mid-1]) return mid-1;

        if(nums[start] > nums[mid]) return pivot(nums, start, mid-1);
        return pivot(nums, mid+1,stop);
    }

public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot_index = pivot(nums,0,n-1);

        if(pivot_index==-1) return binarySearch(nums,target,0,n-1);
        if(nums[pivot_index] == target) return true;
        if(target<nums[0]) return binarySearch(nums,target,pivot_index+1,n-1);

        return binarySearch(nums,target,0,pivot_index-1);
    }
};
