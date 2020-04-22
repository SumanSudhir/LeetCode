class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> output;
        map<string, vector<string>> store;
        int n = strs.size();

        for(int i=0; i<n; i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            store[temp].push_back(strs[i]);
        }

        for(auto i=store.begin(); i != store.end(); i++) output.push_back(i->second);

        return output;
    }
};
