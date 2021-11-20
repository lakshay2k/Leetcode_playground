//question link:  https://leetcode.com/explore/featured/card/top-interview-questions-easy/102/math/745/


class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if(n>1)
        {
            //we will factorise till we get one which states that number is power of 3 otherwise not
            while(n%3 == 0)
            {
                n=n/3;
            }
        }
        return n == 1;
    }
};
