class Solution {
public:
    string destCity(vector<vector<string>>& paths) {

        int n = paths.size();

        for(int i=0;i<n;i++){
            string last = paths[i][1];
            bool connecting = false;
            for(int j=0;j<n;j++){
                if(i != j && paths[j][0] == last) connecting += true;
            }
            if(connecting == false) return last;
        }

        return "";
    }
};
