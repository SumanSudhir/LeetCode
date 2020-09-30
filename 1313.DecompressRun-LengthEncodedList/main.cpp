class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {

        vector<int> output;
        int n = nums.size();

        for(int i=0;i<n;i=i+2){
            int freq = nums[i];
            int val = nums[i+1];

            for(int j=0;j<freq;j++) output.push_back(val);
            // i++;
        }

        return output;

    }
};
