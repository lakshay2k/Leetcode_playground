class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        //creating vector of length amount + 1 because index is from 0
        //initializing the elements with maximum integer element
        vector<int> subresults(amount+1, INT_MAX);
        
        //if the amount is 0 , then we will need 0 number of coins to represent it
        subresults[0] = 0;
        
        //calculate minimum number of coins needed for each amount less than target amount
        //use minimum coins (subresults) needs for lower amount in calculating coins for higher amount
        for(int curr_amount = 1; curr_amount<=amount;curr_amount++)
        {
            for(int c_idx = 0; c_idx<coins.size();c_idx++)
            {
                if(coins[c_idx] <= curr_amount)
                {
                    int intermediate_result = subresults[curr_amount - coins[c_idx]];
                    
                    if(intermediate_result != INT_MAX && intermediate_result+1 < subresults[curr_amount])
                        subresults[curr_amount] = intermediate_result + 1;
                }
            }
        }
        return subresults[amount] != INT_MAX ? subresults[amount] : -1;
    }
};