class Solution {
public:

    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        
        //making negative numbers or number greater than length as any big number just to discard them
        for(int i=0;i<n;i++)
        {
            if(nums[i]<=0 || nums[i]>n)
                nums[i] = n + 1;
        }
        
        //as array as zero indexed we take index-1 and check if number is positive at that index , then we make it negative to mark it as counted.
        //here the marked means the index say 3 then number 4 is present in array 
        //and if any number is left positive say at index 1 then number 2 is missing (index+1)
        for(int i=0;i<n;i++)
        {
            int index = abs(nums[i]);
            if(index > n)
                continue;
            index=index-1; // because arrays are 0 indexed
            if(nums[index]>0)
                nums[index] = -nums[index];
        }
    
        //returning number that is index +1 explained above
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
                return i+1;
        }
        
        //when in array,  numbers are present from 1 to n
        return n+1;
    }
};
