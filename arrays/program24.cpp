class Solution {
public:

    int findDuplicate(vector<int>& nums) {
        
        //using the tortoise and hare approach
        int tortoise = nums[0];
        int hare = nums[0];
        
        do{
            tortoise = nums[tortoise]; //tortoise is slow
            hare = nums[nums[hare]];//hare is fast
        }while(tortoise != hare);
        
        //as we have found the first intersection and now its time to slow them down
        //now the intersection will be the entrance point or duplicate number
        tortoise = nums[0];

        while(tortoise != hare)
        {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }

        return hare;
    }
};