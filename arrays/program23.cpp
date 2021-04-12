class Solution {
public:

    int longestConsecutive(vector<int>& nums) {
        
        //making set to remove duplicate numbers
        set<int> myset;
        
        for(int num : nums)
            myset.insert(num);
        
        int final_max=0;
        
        //checking num-1 for all num in nums vector
        //if num -1 is present , do nothing .otherwise if num -1 is not present
        //take num as starting point and keep adding 1 till you find a number that does exit in set and then keep incrementing the counter which will give you the maximum length
        
        for(int num : nums)
        {
            if(!myset.count(num-1))
            {
                int curr_num = num;
                int curr_max = 1;
                
                while(myset.count(curr_num+1))
                {
                    curr_num = curr_num +1;
                    curr_max=curr_max+1;
                }
                //we may have different length of longest consecutive seq so taking maxn
                //as in ex 1 : 100,101,102 and 1,2,3,4 so max is 4
                final_max = max(final_max,curr_max);
            }
        }

        return final_max;
    }
};