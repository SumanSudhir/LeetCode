// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {

//         if(prices.size() == 0) return 0;

//         vector<int> dp(prices.size(),0);
//         int max = 0;

//         for(int i=0;i<prices.size();i++){
//             for(int j=i+1;j<prices.size();j++){
//                 if(max < (prices[j] - prices[i])) max = prices[j] - prices[i];
//             }
//         }

//         return max;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int max_profit = 0;
        int min_price = INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(min_price > prices[i]) min_price = prices[i];
            else if(prices[i]-min_price > max_profit) max_profit = prices[i]-min_price;
        }

        return max_profit;
    }
};
