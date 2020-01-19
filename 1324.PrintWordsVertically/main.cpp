class Solution {
public:
    vector<string> printVertically(string s) {

        vector<string> output;
        vector<string> sstore;
        stringstream ss(s);
        string temp;
        int maxx = 0;

        while(ss >> temp){
            sstore.push_back(temp);
            maxx = max(maxx, (int)temp.size());
        }

        for(int i=0;i<maxx;i++){
            string temp;
            for(int j=0;j<sstore.size();j++){
                temp += i < sstore[j].size() ? sstore[j][i] : ' ';
            }
            while(temp.back() == ' '){
                temp.pop_back();
            }
            output.push_back(temp);
        }
        return output;
    }
};
