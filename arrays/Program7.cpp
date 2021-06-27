class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //we will follow two approaches
        /*
        1. if we dont get carry at first digit i.e 999 will get carry at frist 9 and will result in 1000
        2/ we get carry at first for ex 999 +1=1000
        */
        
        int i=0,j=0;
        int carry=1,temp=0;
        for(i=digits.size()-1;i>=0;i--)
        {
            temp = carry + digits[i];   //we take the digits starting from last and add the carry to it and moving to left with carry
            digits[i] = temp%10;  //if we get carry after addig one like 9+1 = temp = 10 so updatedtemp = 10%10=0 so last bit is 0
            carry = temp/10; // calculating carry by diving the temp by 10
        }
        
        //2nd case- ifcarry is not zero then we create a new vector and add carry first then add the value evaluated usingh above for loop
        if(carry != 0)
        {
            vector<int> v;
            v.push_back(carry);
            for(i=0;i<digits.size();i++)
            {
                temp = digits[i];
                v.push_back(temp);
            }
            return v;
        }
        
        //returning the digits
        return digits;
    }
};
