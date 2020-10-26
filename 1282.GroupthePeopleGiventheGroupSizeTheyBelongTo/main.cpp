class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {

        vector<vector<int>> out;
        int n = groupSizes.size();

        set<int> st;

        for(int i:groupSizes){
            st.insert(i);
        }

        for(auto j:st){
            vector<int> temp;
            for(int i=0;i<n;i++){
                if(groupSizes[i] == j){
                    temp.push_back(i);
                }
                if(temp.size() == j){
                    out.push_back(temp);
                    temp = {};
                }
            }
        }

        return out;
    }
};
