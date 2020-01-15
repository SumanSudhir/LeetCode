class Solution {

public:
    int reverseString(string s){
        string temp;
        for(int i=0;i<s.length();i++){
            temp[i] = s[s.length()-1-i];

        }
        int output;
        output = stoi(temp);
        return output;
    }

public:
    int reverse(int x) {

        bool flag = false;
        int output = 0;
        if(x < 0){
            flag = true;
            x = -x;
        }

        while(x%10 == 0 && x != 0){
            x = x/10;
        }

        if(x/10 == 0){
            return x;
        }


        string str = to_string(x);
        output = reverseString(str);
        if(flag)
            output = -output;

        return output;
    }
};
