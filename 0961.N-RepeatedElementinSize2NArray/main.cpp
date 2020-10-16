class Solution {
public:
    int repeatedNTimes(vector<int>& A) {

        int n = A.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(A[i]==A[j]) return A[i];
            }
        }

        return 0;
    }
};
