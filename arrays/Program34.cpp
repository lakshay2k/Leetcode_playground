class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //reducing the space complexity
        //calculating two sums and the difference comes the missing element
        int sum1 =0, sum2=0;
        
        //calculating the sum of series using formula
        sum1 = (nums.size()*(nums.size()+1))/2;
        for(auto i:nums)
        {
            sum2 = sum2 + i;
        }
        return sum1-sum2;
    }
};
