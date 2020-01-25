class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.length();
        int n = p.length();
        bool T[m+1][n+1];

        s = ' ' + s;
        p = ' ' + p;


        T[0][0] = true;
        for(int i=1;i<=n;i++){
            if(p[i] == '*'){
                T[0][i] = T[0][i-2];
            }
            else{
                T[0][i] = false;
            }
        }
        for(int i=1;i<=m;i++){
            T[i][0] = false;
        }

        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if((s[i] == p[j]) || (p[j] == '.')){
                    T[i][j] = T[i-1][j-1];
                }

                else if(p[j] == '*'){
                    T[i][j] = T[i][j-2];

                    if((s[i] == p[j-1]) || (p[j-1] == '.')){
                        T[i][j] = T[i][j] | T[i-1][j];
                    }
                }
                else{
                    T[i][j] = false;
                }
            }
            cout<<endl;
        }
        return T[m][n];
    }
};
