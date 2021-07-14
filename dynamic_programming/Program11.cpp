// Question Link: 
// https://leetcode.com/problems/divisor-game/

class Solution {
public:
    bool divisorGame(int n) {
        if(n%2==0)
            return 1;
        else
            return 0;
    }
};
