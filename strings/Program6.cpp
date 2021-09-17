class Solution {
public:
    int myAtoi(string s) {
       
        int i=0, flag=0;
        while(1)
        {
            if(s[i]==' '){
                i++;
            }
            else if(flag==0 && s[i]=='-')
            {
                flag=-1;
                i++;
                break;
            }
            else if(flag==0 && s[i]=='+')
            {
                flag=1;
                i++;
                break;
            }
            else
                break;
        }
        long ans=0;
        for(;i<s.size();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                ans=10*ans+(s[i]-'0');
                if(flag<0 && ans>=2147483648)
                    return -2147483648;
                if(flag>=0 && ans>=2147483647)
                    return 2147483647;
            }
            else
                break;
        }
        if(flag<0 && ans>=2147483648)
            return -2147483648;
        if(flag>=0 && ans>=2147483647)
            return 2147483647;
        if(flag==0)
        {
            flag=1;
        }
        return flag*ans;
    }
};
