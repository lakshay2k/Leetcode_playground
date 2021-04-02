class Solution {

public:

    bool canJump(vector<int>& nums) {
        
        //last index is out target to reach
        int last_index = nums.size()-1;
        
        //considering what is the maximum distance that can be covered from every node
        int max_distance = 0;
        
        //condition is that i should be less than the maximum distance and size of vector
        for(int i=0;i<nums.size() && i<=max_distance;i++)
        {
            max_distance = max(max_distance,i+nums[i]);
        }
        
        //if target is less than the max distance covered which means last index is also covered in between
        if(last_index<=max_distance)
            return true;
        
        //otherwise false
        return false;
    }
};