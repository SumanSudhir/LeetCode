class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {

        int num = connections.size();
        int start;
        int stop;
        int count = 0;
        vector<int> arr(n,0);

        if(n > num+1){
            return -1;
        }

        for(int i=0;i<num;i++){
            start = connections[i][0];
            stop = connections[i][1];
            arr[start] = 1;
            arr[stop] = 1;
        }

        for(int i =0;i<n;i++){
            if(arr[i] != 1){
                count++;
            }
        }

        return count;

    }
};
