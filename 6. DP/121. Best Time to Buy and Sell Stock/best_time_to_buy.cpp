class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0) return 0;
        int minBuy = prices[0];
        int profit = 0;
        for(int p: prices){
            minBuy = min(minBuy, p);
            profit = max(profit, p - minBuy);
        }
        return profit;
    }
};