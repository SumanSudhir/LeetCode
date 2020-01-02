class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int startX,endX, positionX, positionY, minRightX, minRightY, maxLeftX, maxLeftY;

        if(n1<=n2){
            startX = 0;
            endX = n1;
            vector<int> arrayX = nums1;
            vector<int> arrayY = nums2;
        }
        else{
            startX = 0;
            endX = n2;
            vector<int> arrayX = nums2;
            vector<int> arrayY = nums1;
        }

        while(true){
            partionX = (startX + endX)/2;
            partionY = (n1+n2+1)/2 - partionX;

            //For dealing with the boundary case

            if(positionX == 0){
                maxLeftX = min(nums1[0], nums2[0]) - 1;
                minRightX = arrayX[positionX];
            }
            else if(partionX == (min(n1,n2))){
                minRightX = max(nums1[n1-1], nums2[n2-1]) + 1;
                manRightX = arrayX[positionX - 1];
            }
            else{
                minRightX = arrayX[positionX];
                maxRightX = arrayX[positionX - 1];
            }

            maxLeftY = arrayY[positionY-1];
            minRightY = arrayY[positionY];

            if((maxLeftX <= minRightY) && (maxLeftY <= minRightX)){
                if((n1+n2)%2 == 0){
                    return max(maxLeftX, maxLeftY);
                }
                else{
                    return (max(maxLeftX, maxLeftY) + min(minRightX, minRightY))/2.0;
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
