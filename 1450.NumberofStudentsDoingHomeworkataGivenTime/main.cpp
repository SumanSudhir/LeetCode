class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {


        int n = startTime.size();
        int count = 0;
        for(int i=0;i<n;i++){
            if(queryTime <= endTime[i]  && queryTime >= startTime[i]) count++;
        }

        return count;
    }
};
