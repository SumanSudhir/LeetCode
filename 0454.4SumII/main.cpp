class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        int count = 0;
        int n = A.size();
        unordered_map<int, int> store;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                store[A[i]+B[j]]++;
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(store.find(-C[i]-D[j]) != store.end()){
                    count += store[-C[i]-D[j]];
                }
            }
        }

        return count;
    }
};
