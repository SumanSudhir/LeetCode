class Solution {
public:
    int maximum69Number (int num) {
        int temp = num;
        int temp2;
        int count = 0;
        while(count < 5){
            temp2 = pow(10,count)*temp/10000;
            temp = temp - pow(10,(4-count))*temp2;
            // cout<<temp<<" ";

            if(temp2 == 6){
                num = num - 6*pow(10,(4-count)) + 9*pow(10,(4-count));
                break;
            }

            count++;
            
        }
        return num;
    }
};
