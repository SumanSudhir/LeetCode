class Solution {
public:
    bool detectCapitalUse(string word) {

        bool f_upper = isupper(word[0]);
        bool f_lower = islower(word[0]);
        bool rem_upper = true;
        bool rem_lower = true;

        for(int i=1;i<word.size();i++){
            rem_upper = rem_upper && isupper(word[i]);
            rem_lower = rem_lower && islower(word[i]);
        }


        if(f_upper) return rem_upper || rem_lower;
        if(f_lower) return rem_lower;

        return false;
    }
};
