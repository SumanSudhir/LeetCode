class Solution {
public:

    int abs(int a){
        if(a<0){
            return -a;
        }
        else return a;
    }
    int findBestValue(vector<int>& arr, int target) {

        int min = abs(target);
        int elem = arr[0];
        int n = 0

        for(int i = 0;i<arr.size();i++){
            int value = arr[i];
            int sum = 0;
            for(int j = 0; j< arr.size();j++){
                if(value< arr[j]){
                    sum = sum+value     ;
                }
                else{
                    sum = sum+arr[j];
                }
            }
            if(min > abs(target-sum)){
                min = abs(target-sum);
                elem = arr[i];
            }
            else if(min == abs(target-sum)){
                if(elem < arr[i]){
                    elem = elem;
                }
                else{
                    elem = arr[i];
                }
            }

            if(arr[i] >= ceil(target/arr.size())){
                n++;
            }
        }

        if(n == arr.size()){
            return ceil(target/arr.size());
        }
        return elem;
    }
};
