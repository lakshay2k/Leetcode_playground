class Solution {
public:

bool checkPossibility(vector<int>& nums) {
    
    //to keep count of changes made
    int count = 0;
    
    for(int i = 1; i < nums.size() ; i++)
    {

        if(nums[i] < nums[i-1])
        {
            //if num at i-2 is less than i we decrease i-1 element down to current(ith) element
            if(i==1 || nums[i-2] <= nums[i])
            {
                nums[i-1] = nums[i];
                count++;
            }
            //else we increament current(ith) element to previous element
            else
            {
                nums[i] = nums[i-1];
                count++;
            }

        }
    }
    
    //we return true if changes made is 0 or 1
    return count<=1;
}
};
