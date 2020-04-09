class Solution {
public:
    string multiply(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();

        string prod(n1+n2, '0');
        int temp;

        for(int i=n2-1; i>=0; i--){
            for(int j=n1-1;j>=0; j--){
                temp = (num1[j]- '0')*(num2[i] - '0') + (prod[i+j+1] - '0');
                prod[i+j+1] = temp%10 + '0';
                prod[i+j] += temp/10;
            }
        }

        for(int i=0; i<(n1+n2); i++){
            if(prod[i] != '0') return prod.substr(i);
        }

        return "0";
    }
};
