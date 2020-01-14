class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int>output(T.size());
        stack<int> s;
        s.push(0);

        for(int i=1; i<T.size(); i++){
            while(!s.empty() && T[i] > T[s.top()]){
                output[s.top()] = i - s.top();
                s.pop();
            }
            s.push(i);
        }
        return output;
    }
};
