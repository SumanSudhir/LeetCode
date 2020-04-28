class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.size();
        int n = b.size();
        int mx = max(m,n);
        string s(mx+1, '0');

        for(int i=1; i<=mx; i++){
            if(i<=m && i<=n){
                int temp = ((a[m-i] - '0') + (b[n-i] - '0') + (s[mx+1-i] - '0'));
                s[mx+1-i] = temp%2 + '0';
                s[mx-i] = temp/2 + '0';
            }

            if(m<n && i>m){
                int temp = ((b[n-i] - '0') + (s[mx+1-i] - '0'));
                s[mx-i+1] = temp%2 + '0';
                s[mx-i] = temp/2 + '0';
            }

            if(m>n && i>n){
                int temp = ((a[m-i] - '0') + (s[mx+1-i] - '0'));
                s[mx+1-i] = temp%2 + '0';
                s[mx-i] = temp/2 + '0';
            }

        }

        for(int i=0; i<=mx; i++){
            if(s[i] != '0' || i == mx) return s.substr(i);
        }


        return s;
    }
};
