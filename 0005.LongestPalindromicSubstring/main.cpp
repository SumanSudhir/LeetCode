class Solution {
public:
    string longestPalindrome(string s) {

        int n = s.size();
        if(n==0) return s;

        int max_len = 1;
        string output = s.substr(0, max_len);
        vector<vector<int>> dp(n,vector<int>(n,0));

        for(int i=0;i<n-1;i++){
            dp[i][i] = 1;
            if(s[i] == s[i+1]){
                dp[i][i+1] = 1;
                max_len = 2;
                output = s.substr(i, max_len);
            }
        }

        dp[n-1][n-1] = 1;

        int size = 2;
        int start = 0;
        int end = start + size;


        while(size < n){
            while(start < n && end < n){
                if(s[start] == s[end] && dp[start+1][end-1] == 1){
                    dp[start][end] = 1;
                    if(max_len < size+1){
                        max_len = size+1;
                        output = s.substr(start, max_len);
                    }
                }
                start++;
                end++;
            }

            size++;
            start = 0;
            end = start + size;
        }


        return output;
    }
};
