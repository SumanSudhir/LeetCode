class Solution {
public:
    bool isPalindrome(string s) {
        string comp = "";
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        for(int i=0;i<s.size();i++){
            if((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z')) comp += s[i];
        }

        string rev(comp);
        reverse(rev.begin(), rev.end());

        if(comp == rev) return true;

        return false;

    }
};
