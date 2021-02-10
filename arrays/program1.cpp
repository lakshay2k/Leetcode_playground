class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j,len=0,to_delete;
        for(i=0;i<nums.size();i++)
        {
            len=len+1;
        }
        for(i=0;i<len-1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                to_delete=i;
                for(j=to_delete+1;j<nums.size();j++)
                {
                    nums[j-1]=nums[j];
                }
                len--;
                i=i-1;
            }
        }
        return len;
    }
};