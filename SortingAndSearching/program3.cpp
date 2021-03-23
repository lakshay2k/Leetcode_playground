class Solution {
public:
    void sortColors(vector<int>& nums) {
        //creating variable for storing minimum index
        int minpos;
        int i,j;
        //using counting index
        for(i=0;i<nums.size();i++)
        {
            minpos = i;
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[j]<nums[minpos])
                {
                    minpos = j;
                }
            }
            //swaping the first values ie. i with te minpos
            int temp = nums[minpos];
            nums[minpos]=nums[i];
            nums[i]=temp;
        }        
    }
};