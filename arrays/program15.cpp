
class Solution {
public:
    string longestPalindrome(string s) {
        //1 length string is by default palindrome
        int maxLength = 1;
        string res;
 
    int start = 0;
    int len = s.size();
 
    int low, high;
    for (int i = 1; i < len; ++i) {
        //for even size palindrome
        //we will assign two adjacent values in low and high for even palindrome 
        low = i - 1;
        high = i;
        while (low >= 0 && high < len && s[low] == s[high]) {
            if (high - low + 1 > maxLength) {
                start = low;
                maxLength = high - low + 1;
            }
            --low;
            ++high;
        }

        //for odd size palindrome
        //we will assign in odd pairs to have a middle element
        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < len && s[low] == s[high]) {
            if (high - low + 1 > maxLength) {
                start = low;
                maxLength = high - low + 1;
            }
            --low;
            ++high;
        }
    }
        //extracting a substring that is the palindrome
 res = s.substr(start,maxLength);
        return res;
    
        
    }
};
