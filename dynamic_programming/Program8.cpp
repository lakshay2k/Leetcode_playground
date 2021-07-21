class Solution {
public:

    int lengthOfLIS(vector<int>& nums) {
        
        //creating a vector of subresults so store them
        int n=nums.size();
        vector<int> subresults(n,1);
        
        //checking the element in less than every previous elements and considering the max of result
        //getting after selecting curr element or previous + 1
        for(int i = 1; i < n; i++)
        {
            for(int j = 0;j < i; j++)
            {
                if(nums[j]<nums[i])
                {
                    subresults[i] = max(subresults[i] , subresults[j] + 1);
                }
            }
        }
        
        //return maximum element in the vector as it would be the length of Longest increasing subsequence
        return *max_element(subresults.begin(),subresults.end());
    }
};
