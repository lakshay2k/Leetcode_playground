class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0)
            return 0;
        else
        {
            return haystack.find(needle);
        }
    }
};