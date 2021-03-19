class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        //if it is not a triplet, return false
        if(nums.size()<3)
        {
            return false;
        }
        //setting the range of numbers given in question 2^31-1
        int min_one = 2147483647;
        int min_two = 2147483647;
        
        for(int num : nums)
        {
        //checking triplets like smallest number is given as min_one
        //number less than min_one is updated to min_one
            if(num<min_one)
            {
                min_one = num;
            }
        //if number is greater than min_one, then it can be min_two and using min function to 
        //evaluate the minmum value encountered till now.
            if(num>min_one)
            {
                min_two = min(min_two,num);
            }
        //if num is greater than min_two then it is confirmed to form a triplet so we return true. 
            if(num>min_two)
            {
                return true;
            }
        }
        //otherwise false..
        return false;
    }
};