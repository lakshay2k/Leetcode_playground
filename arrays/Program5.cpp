class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i;
        for(i=0;i<nums.size();i++)
        {
            int a=count(nums.begin(),nums.end(),nums[i]);
            if(a!=2)
            {
                return nums[i];
            }
        }
        return 0;
    }
};
