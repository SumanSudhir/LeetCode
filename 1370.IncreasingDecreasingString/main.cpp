class Solution {
public:
    string sortString(string s) {

        string out = "";
        vector<int> freq(26,0);

        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }

        while(true){
            for(int i=0;i<26;i++){
                if(freq[i] > 0){
                    out += 'a' + i;
                    freq[i]--;
                }
            }

            for(int i=25;i>=0;i--){
                if(freq[i] > 0){
                    out += 'a' + i;
                    freq[i]--;
                }
            }

            if(out.size() == s.size()) break;
        }

        return out;
    }
};
