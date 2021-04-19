class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        //here element stores the majority element and its count value in count
        int count = 0,element = 0;
        
        for(int num : nums)
        {
            //when we get count equal to 0 means that majority element is in right side not on left
            //dry run for any value and look
            if(count ==0)
                element = num;
            //increamenting count of majority element
            if(element == num)
                count++;
            //decreasing count as if no. of minority should not be equal to majority
            else
                count--;
        }
        
        //now thee element left at last returns the majority element,
        return element;
    }
};