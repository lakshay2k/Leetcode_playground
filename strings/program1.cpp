class Solution {
public:
    void reverseString(vector<char>& s) {
        int i,j,temp=0;
        for(i=0,j=s.size()-1;i<j;i++,j--)
        {
            
            temp = s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
};