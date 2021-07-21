// Question link:
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s=prices.size();
        int profit= 0;
        int min = prices[0];
        for(int i=0;i<s;i++)
        {
            if(profit < (prices[i]-min))
            {
                profit=prices[i]-min;
            }
            if(min>prices[i])
                min=prices[i];
        }
        return profit;
    }
};
