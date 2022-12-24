// O(N^2) Time and O(N^2) Space --> Dynamic Programming/Memoization
class Solution {
    vector<vector<int>> dp;
    int buySell(vector<int>& prices, int buyDay = 0, int sellDay = 1){
        if(sellDay >= prices.size()) return 0;
        if(dp[buyDay][sellDay] != -1) return dp[buyDay][sellDay];
        int diff = prices[sellDay] - prices[buyDay];
        int whenNotBuy = 0, whenHold = 0, whenSold = 0;
        whenNotBuy = buySell(prices, buyDay+1, sellDay+1);
        whenHold = buySell(prices, buyDay, sellDay+1);
        whenSold = diff + buySell(prices, sellDay+2, sellDay+3);
        dp[buyDay][sellDay] = max(whenNotBuy, max(whenHold, whenSold));
        return dp[buyDay][sellDay];
    }
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        dp.resize(n, vector<int>(n, -1));
        return buySell(prices);
    }
};