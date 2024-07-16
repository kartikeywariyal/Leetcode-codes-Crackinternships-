class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min1=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            profit=max(profit,prices[i]-min1);
            min1=min(prices[i],min1);
        }
        return profit;
    }
};
