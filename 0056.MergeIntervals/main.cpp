class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> output;
        int n = intervals.size();
        if(n == 0) return output;
        sort(intervals.begin(), intervals.end());
        int start = intervals[0][0];
        int stop = intervals[0][1];

        for(int i=1; i<n; i++){
            if(intervals[i][0] <= stop){
                start = min(start, intervals[i][0]);
                stop =  max(stop, intervals[i][1]);
            }
            else{
                output.push_back(vector<int> {start, stop});
                start = intervals[i][0];
                stop = intervals[i][1];
            }
        }

        output.push_back(vector<int> {start, stop});

        return output;
    }
};
