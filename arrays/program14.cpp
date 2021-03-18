class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // count the length of longest substring in ans
        int ans=0;
        int n=s.size();
        unordered_set<char> myset;
        
        //creating a window initially starting them both with zero
        int l=0,r=0;
        while(l<n&&r<n)
        {
            //if the set does not contain the aplhabet of string
            if(myset.find(s[r])==myset.end())
            {
                myset.insert(s[r]);
                //checking the length and increamenting if the window size increases
                ans=max(ans,(r-l+1));
                r++;
            }
            //first remove the alphabet and move the window forward.
            else
            {
                myset.erase(s[l]);
                l++;
            }
        }
        return ans;
    }
};
