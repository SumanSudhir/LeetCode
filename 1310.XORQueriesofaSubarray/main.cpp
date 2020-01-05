class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> output;
        int prevL = 0;
        int prevR = 0;
        int temp = 0;
        int j = 0;

        for(int i=0; i< queries.size(); i++){

            if(queries[i][0] ==  prevL && queries[i][1] >= prevR && i !=0 ) {
                temp = output.back();
                j = prevR + 1;
            }
            else{
                temp = arr[queries[i][0]];
                j = queries[i][0]+1;
            }


            for(j; j<= queries[i][1];j++){
                temp = temp ^ arr[j];
            }

            prevL = queries[i][0];
            prevR = queries[i][1];

            output.push_back(temp);
        }


    return output;
    }
};
