class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        int i;
        if(n==0) {return -1;}
        if(n==1) {return 0;}
        for(i=0;i<n;i++)
        {
            if(s.find(s[i])==s.find_last_of(s[i]))
            {
                return i;
            }
        }
        return -1;
    }
};
