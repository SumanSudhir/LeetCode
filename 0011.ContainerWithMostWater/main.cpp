class Solution {
public:
    int maxArea(vector<int>& height) {

        int maxWater = 0;
        int temp_max = 0;
        int n = height.size();
        for(int i=0;i<n;i++){
            for(int j=n-1;j>i;j--){
                temp_max = min(height[i],height[j])*(j-i);
                if(maxWater < temp_max){
                    maxWater = temp_max;
                }
            }
        }

        return maxWater;
    }
};
