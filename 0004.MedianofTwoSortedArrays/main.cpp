class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int startX,endX, partitionX, partitionY, minRightX, minRightY, maxLeftX, maxLeftY;
        vector<int> arrayX;
        vector<int> arrayY;
        if(n1<=n2){
            startX = 0;
            endX = n1;
            arrayX = nums1;
            arrayY = nums2;
        }
        else{
            startX = 0;
            endX = n2;
            arrayX = nums2;
            arrayY = nums1;
        }

        while(true){
            partitionX = (startX + endX)/2;
            partitionY = (n1+n2+1)/2 - partitionX;

            //For dealing with the boundary case

            if(partitionX == 0){
                maxLeftX = min(nums1[0], nums2[0]) - 1;
                minRightX = arrayX[partitionX];
            }
            else if(partitionX == (min(n1,n2))){
                minRightX = max(nums1[n1-1], nums2[n2-1]) + 1;
                maxLeftX = arrayX[partitionX - 1];
            }
            else{
                minRightX = arrayX[partitionX];
                maxLeftX = arrayX[partitionX - 1];
            }

            maxLeftY = arrayY[partitionY-1];
            minRightY = arrayY[partitionY];

            if((maxLeftX <= minRightY) && (maxLeftY <= minRightX)){
                if((n1+n2)%2 == 0){
                    return max(maxLeftX, maxLeftY);
                    break;
                }
                else{
                    return (max(maxLeftX, maxLeftY) + min(minRightX, minRightY))/2.0;
                    break;
                }
            }
            else if(maxLeftX > minRightY){
                endX = endX - 1;
            }
            else{
                startX = startX + 1;
            }
        }
    }
};
