class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int output = 0;
        int temp = 0;

        for(int i = n-1; i>=0; i--){
            if(s[i] == 'I'){
                temp= 1;
            }
            else if(s[i] == 'V'){
                temp = 5;
            }
            else if(s[i] == 'X'){
                temp = 10;
            }
            else if(s[i] == 'L'){
                temp= 50;
            }
            else if(s[i] == 'C'){
                temp = 100;
            }
            else if(s[i] == 'D'){
                temp = 500;
            }
            else if(s[i] == 'M'){
                temp= 1000;
            }

            if(i > 0){
                if(s[i] == 'V' && s[i-1] == 'I'){
                    temp = 4;
                    i--;
                }
                else if(s[i] == 'X' && s[i-1] == 'I'){
                    temp = 9;
                    i--;
                }
                else if(s[i] == 'L' && s[i-1] == 'X'){
                    temp = 40;
                    i--;
                }
                else if(s[i] == 'C' && s[i-1] == 'X'){
                    temp = 90;
                    i--;
                }
                else if(s[i] == 'D' && s[i-1] == 'C'){
                    temp = 400;
                    i--;
                }
                else if(s[i] == 'M' && s[i-1] == 'C'){
                    temp = 900;
                    i--;
                }
            }
            output += temp;
        }

        return output;
    }
};
