class Solution {
public:
    bool canReach(vector<int>& arr, int start) {

        queue<int> q;
        unordered_set<int> track;

        q.push(start);

        while(!q.empty()){
            int index = q.front();
            // cout << index << " ";
            if(arr[index] == 0) return true;
            if(track.find(index) == track.end()){
                if(index - arr[index] >= 0) q.push(index - arr[index]);
                if(index + arr[index] < arr.size()) q.push(index + arr[index]);
            }

            track.insert(index);
            q.pop();

        }

        return false;

    }
};
