class Solution {
public:
    int lengthOfLastWord(string s) {
        int output = 0;
        stringstream ss(s);
        string word;

        while(ss >> word){
            output = word.size();
        }

        return output;
    }
};
