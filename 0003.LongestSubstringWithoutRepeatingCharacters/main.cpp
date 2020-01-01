class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 1;
        int temp = 1;
        int last = 0;

        if(s.length() == 0){
            temp = 0;
            max = 0;
        }

        for(int i = 1;i<s.length();i++){
            temp = 1;
            for(int j=last;j<i;j++){
                if(s[i] != s[j]){
                    temp++;
                }
                else{
                    if(max<temp)
                    max = temp;
                    temp = 1;
                    last = j+1;
                }

                if(max<temp)
                max = temp;
            }
        }

    return max;
    }
};
