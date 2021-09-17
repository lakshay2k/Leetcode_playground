class Solution {
public:
    bool isPalindrome(string s) {
        
        int i,j;
        vector<char> ans;
        for(int k=0;k<s.size();k++)
        {
            if(isalpha(s[k]))
            {
                ans.push_back(tolower(s[k]));
            }
            else if(isdigit(s[k]))
            {
                ans.push_back(s[k]);
            }
        }
        for(i=0,j=ans.size()-1;i<j;i++,j--)
        { 
            if(ans[i]!=ans[j])
            {
                return false;
            }
        }
        return true;
    }
};
