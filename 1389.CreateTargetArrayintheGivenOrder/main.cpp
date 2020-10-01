class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {

        int n = nums.size();
        vector<int> output; //(n,0);

        for(int i=0;i<n;i++){
            output.insert(output.begin()+index[i],nums[i]);
        }

        return output;
    }
};
