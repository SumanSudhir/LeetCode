class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        if(m>n) return -1;
        if(m==0) return 0;
        int j = 0;
        for(int i=0;i<n;i++){
            if(j<m  && (haystack[i] == needle[j])){
                j++;
                if(j == m) return i-j+1;
            }
            else{
                i = i-j;
                j = 0;
            }
        }
    return -1;
    }
};
