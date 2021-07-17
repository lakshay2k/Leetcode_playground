class Solution {
public: 
    int minCostClimbingStairs(vector<int>& cost) {
        //calculating the size of cost vector which may be used while iterating.
        int n = cost.size();
        
        //creating dp vector of n+1 to store the min cost reaching n
        vector<int> dp(n+1,INT_MAX);
        
        //as we can start from first or second step, so they will be counted as zero means no cost for them
        dp[0]=0;
        dp[1]=0;
        
        //starting from 2->n, we usually check the value at previous index(both for dp array and cost array) and previous to previous index 
        //and check by taking which step, it is the minimum.
        for(int i=2;i<=n;++i)
        {
            dp[i] = min(dp[i-1]+cost[i-1],dp[i-2]+cost[i-2]);
            cout<<dp[i]<<endl;
        }
        
        //returnig the min cost stored at dp[n] for reaching the nth step.
        return dp[n];
    }
};
