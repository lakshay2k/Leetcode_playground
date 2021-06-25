class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int s=prices.size(), profit= 0, min = prices[0];
        for(int i=0;i<s;i++)
        {
            //if profit is less than the difference of sell price and buy price
            if(profit < (prices[i]-min))
            {
                profit=prices[i]-min;
            }
            
            //checking the min to buy the stock on that day
            if(min>prices[i])
                min=prices[i];
        }
        return profit;
    }
};
