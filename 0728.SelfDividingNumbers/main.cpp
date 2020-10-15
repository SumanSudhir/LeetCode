class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> out;

        for(int i=left;i<=right;i++){
            bool track = true;
            int temp = i;
            while(temp != 0){
                int digit = temp%10;
                temp = temp/10;
                if(digit == 0 || i % digit !=0) track *= false;
            }
            if(track == true) out.push_back(i);
        }

        return out;
    }
};
