class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s;
        }
        int n = s.length();
        string output;
        int count = 0;
        int i;
        vector<int> store_index;

        while(count<numRows){
            output +=  s[count];
            if(count == 0){
                i = numRows*2-2;
                store_index.push_back(i);
                while(i<n){
                    output += s[i];
                    i = i + numRows*2-2;
                    store_index.push_back(i);
                }
            }
            else if(count+1 == numRows){
                i = numRows*2 -2;
                while(numRows-1 + i < n){
                    output += s[numRows-1 + i];
                    i = i + numRows*2-2;
                }
            }
            else{
                i = 0;
                while(i<store_index.size()){

                    if((store_index[i]-count) < n && (store_index[i]-count) >0){
                    output += s[store_index[i] -count];
                    }
                    if((store_index[i]+count) < n){
                        output += s[store_index[i]+count];
                    }
                    i++;
                }
            }

            count++;
        }
        return output;
    }
};
