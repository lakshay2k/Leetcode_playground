class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=0,j=0;
        int carry=1,temp=0;
        for(i=digits.size()-1;i>=0;i--)
        {
            temp = carry + digits[i];
            digits[i] = temp%10;
            carry = temp/10;
        }
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
        return digits;
    }
};
