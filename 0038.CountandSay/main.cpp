class Solution {
public:
    string countAndSay(int n) {
        if(n == 0) return "";

        string output = "1";

        for(int i=1; i<n; i++){
            string current = "";
            for(int j=0; j<output.length(); j++){
                int track = 1;
                while(j+1 < output.length() && output[j] == output[j+1]){
                    track++;
                    j++;
                }
                current += to_string(track) + output[j];
            }
            output = current;
        }
        return output;
    }
};
