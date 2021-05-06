class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int i,rem=0,n=0,count=0,dig=0;
            for(i=0;i<nums.size();i++)
            {
                n=nums[i];
                while(n>0)
                {
                    n=n/10;
                    dig=dig+1;
                }
                if(dig%2==0)
                {
                    count=count+1;
                }
                dig=0;
            } 
        return count;
    }
};