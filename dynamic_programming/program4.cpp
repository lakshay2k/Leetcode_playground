class Solution {
public:
    int rob(vector<int>& nums) {
        //int max_even=0,max_odd=0;
        int n=nums.size();
        int myhouse[n+2];
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];
        
        myhouse[0]=nums[0];
        myhouse[1]=max(nums[0],nums[1]);
        
        for(int i=2;i<n;i++)
        {
           myhouse[i]=max(nums[i]+myhouse[i-2],myhouse[i-1]);
           
        }
        return myhouse[n-1];
    }
};