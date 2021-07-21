class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //sorting the whole array
        sort(nums.begin(),nums.end());
        
        //checking every 2 elements to skip duplicates and adding check if we come to last element
        for(int i=0;i<nums.size();i=i+2)
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
