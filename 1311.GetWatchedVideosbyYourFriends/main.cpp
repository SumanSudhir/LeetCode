class Solution {
public:
    vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos, vector<vector<int>>& friends, int id, int level) {
        vector<string> output;
        unordered_set<int> track;
        queue<int> q;

        track.insert(id);
        for(auto i: friends[id]){
            q.push(i);
            track.insert(i);
        }

        int i=1;
        while(i<level){
            int n = q.size();
            for(int j=0;j<n;j++){
                int tempf = q.front();
                cout<< tempf<< " ";
                for(auto k: friends[tempf]){
                   if(track.find(k) == track.end()){
                       q.push(k);
                       track.insert(k);
                     }
                }
                q.pop();
            }
            i++;
        }

        map<string,int> freq;
        while(!q.empty()){
            int tempf = q.front();
            for(auto j: watchedVideos[tempf]) freq[j]++;
            q.pop();
        }

        vector<pair<int,string>> vect;
        for(auto i: freq) vect.push_back(make_pair(i.second, i.first));
        sort(vect.begin(),vect.end());
        for(int i=0;i<vect.size();i++) output.push_back(vect[i].second);

        return output;
    }
};
