class Solution {

public:
    int binarySearch(vector<int>& nums, int start, int stop, int target){
        if(stop < start) return -1;
        int mid = (start+stop)/2;

        if(target == nums[mid]) return mid;
        if(target < nums[mid]) return binarySearch(nums, start, mid-1, target);

        return binarySearch(nums, mid+1, stop, target);
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> output;
        int n = nums.size();
        int index = binarySearch(nums, 0, n-1, target);
        int lower = index;
        int upper = index;

        if(index == -1){
            output.push_back(-1);
            output.push_back(-1);
            return output;
        }

        else {
            while(lower >= 0 && target == nums[lower]){
                lower--;
            }

            while(upper < n && target == nums[upper]){
                upper++;
            }

        }
        lower++;
        upper--;

        output.push_back(lower);
        output.push_back(upper);
        return output;
    }
};
