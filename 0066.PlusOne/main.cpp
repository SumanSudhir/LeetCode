class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.size() == 0) return vector<int> {1};
        int n = digits.size();
        if (digits[n-1] != 9){
            digits[n-1] += 1;
            return digits;
        }

        digits[n-1] += 1;
        for(int i=n-1; i>=1; i--){
            digits[i-1] += digits[i]/10;
            digits[i] = digits[i]%10;
        }

        if(digits[0]/10 != 0){
            digits[0] = digits[0]%10;
            digits.insert(digits.begin() + 0, 1);
        }

        return digits;
    }
};
