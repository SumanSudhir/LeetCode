class Solution {
public:
    int longestSubstring(string s, int k) {
        int len = 0;
        int temp = 0;
        int start,end;
        map<char, int> freq;

        if(s.length() == 0){
            return 0;
        }

        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
        }

        for(int i=0;i<s.length();i++){
            if(freq.at(s[i]) >= k){
                start = i;
                end = s.length();

                for(int j=i+1;j<s.length();j++){
                    if(freq.at(s[j]) < k){
                        end = j;
                        break;
                    }
                }

                while(end != start){
                    temp = 0;
                    map<char, int> sub_freq;
                    for(int j=start;j<end;j++){
                        sub_freq[s[j]]++;
                    }

                    for(int j=start;j<end;j++){
                        if(sub_freq.at(s[j]) >= k){
                            temp++;
                        }
                    }

                    // cout<< start<<end;
                    // cout<<temp;
                    if(temp == (end-start)){
                        // cout<<temp;
                        if(len< temp){
                            len = temp;
                            // cout<<len;
                            break;
                        }
                        end = start;
                    }
                    else{end--;}
                    }
                }
        }

    return len;
    }
};
