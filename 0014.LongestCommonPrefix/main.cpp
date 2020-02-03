class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if(strs.size() == 0){
            return "";
        }

        int len_shortest_string = strs[0].length();
        int index = 0;
        string output  = "";

        for(int i=0;i<strs.size();i++){
            if(len_shortest_string < strs[i].length()){
                len_shortest_string = strs[i].length();
                index = i;
            }
        }

        for(int i=0;i <len_shortest_string;i++){
            int temp = 0;
            for(int j=0;j<strs.size();j++){
                if(strs[index][i] == strs[j][i]){
                    temp++;
                }
            }
            if(temp == strs.size()){
                output += strs[index][i];
            }
            else{
                break;
            }
        }

        return output;
    }
};
