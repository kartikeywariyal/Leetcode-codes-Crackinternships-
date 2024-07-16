
    int dp[100001][2]; 

    int func(int ind, vector<int>& p, int buy, int price) {
        if (ind >= p.size()) return 0;
        
        if (dp[ind][buy] != -1) return dp[ind][buy];
        int l = 0, r = 0;
        r = func(ind + 1, p, buy, price);
       
        if (buy) {
            l =  p[ind]+ func(ind + 1, p, 0, 0);
            r = func(ind + 1, p, buy, price);
        } else {
            l = -p[ind]+func(ind + 1, p, 1,0);
            
        }
        
        return dp[ind][buy] = max(l, r);
    }

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return func(0,prices,0,0);
    }
};
