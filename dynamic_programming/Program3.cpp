class Solution {
public:
    
    //Using KADANE's Algorithm
    int maxSubArray(vector<int>& nums) {
        int max_until=nums[0],maximum = nums[0];
        int n =nums.size();
        if(n==1)
        {
            return nums[0];
        }
        for(int i=1;i<n;i++)
        {
            max_until = max(nums[i],max_until+nums[i]);
            maximum = max(maximum,max_until);
        }
        return maximum;        
    }
};
