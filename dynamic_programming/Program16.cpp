// Question link:
// https://leetcode.com/problems/get-maximum-in-generated-array/

class Solution {
public:
    int getMaximumGenerated(int n) {3
        
        //if arraysize is 0 then return 0 as max elem
        if(n==0)
            return 0;
        
        //creating vec of n+1 elem and initialising all to 0
        vector<int> nums(n+1,0);
        
        nums[0]=0;
        nums[1]=1;
        
        //if we observe that all even index elem are assigned by divisible 2 index elem and 
        //odd elem index has the middle and middle +1 elem
        for(int i=2;i<=n;i=i+2)
        {
            //for even index elements
            if(i%2==0)
                nums[i]=nums[i/2];
            //for odd index elems
            if(i+1<=n)
                nums[i+1]=nums[i/2]+nums[i/2+1];
        }
        /* just for checking the generated nums.
        for(auto x:nums)
            cout<<x<<endl;
            */
                                    
        return *max_element(nums.begin(),nums.end());
    }
};
