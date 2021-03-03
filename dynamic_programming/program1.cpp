class Solution {
public:
    int climbStairs(int n) {
       int i;
        vector<int> mysteps;
        //if person comes from (n-1)th stair
        mysteps.push_back(1); 
        //if person comes from (n-2)th stair
        mysteps.push_back(2);
        
        //counting number of ways to reach (n-1)th and (n-2)th stair
        for(i=2;i<n;i++)
        {
            mysteps.push_back(mysteps[i-1]+mysteps[i-2]);
        }
        return mysteps[n-1];
    }
    
};
