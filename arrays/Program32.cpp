class Solution {
public:
    int singleNumber(vector<int>& nums) {.
        //sorting the whole array
        sort(nums.begin(),nums.end());
                                         
        //checking every third element and adding a check if we get to the last element.                                 
        for(int i=0;i<nums.size();i=i+3)
        {
            if(nums[i]!=nums[nums.size()-1])
            {
            if(nums[i]!=nums[i+1])
                return nums[i];
            }
            else
                return nums[i];
        }
        return 0;
    }
};
