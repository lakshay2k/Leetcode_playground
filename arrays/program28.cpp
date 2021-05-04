class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        //to reduce space complexity, i performed inplace operations
        for(int i=1;i<nums.size();i++)
        {
            //the sum of ith element is sum of current ele + sum till (i-1)th element
            nums[i] = nums[i] + nums[i-1];
        }
        
        return nums;
    }
};