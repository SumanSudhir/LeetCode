class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int,int> mp;

        for(int i: arr) mp[i]++;

        for(auto i: mp){
            for(auto j: mp){
                if(i.first != j.first && i.second == j.second) return false;
            }
        }

        return true;
    }
};
