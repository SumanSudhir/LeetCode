class Solution {
public:
    string defangIPaddr(string address) {

        string output = "";
        for(auto i: address){
            if(i == '.') output += "[.]";
            else output += i;
        }

        return output;
    }
};
