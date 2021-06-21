class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        //taking len which we will decrement after every duplicaet removal
        int i,j,len=nums.size(),to_delete;  //to_delete for storing index of no. to be deleted 
        
        //goinf till second last element
        for(i=0;i<len-1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                to_delete=i+1;
                for(j=to_delete;j<len;j++)
                {
                    nums[j-1]=nums[j];
                }
                len--; // for updating len of array after duplicate removal
                i=i-1; // for considering the number after duplicate to check if more duplicate of that no. exists or not.
            }
        }
        
        //returning length of updated array
        return len;
    }
};
