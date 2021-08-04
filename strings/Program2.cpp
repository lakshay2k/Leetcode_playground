class Solution {
public:
    int reverse(int x) {
        int rem;
        long int res=0;
        int n=x;
        while(n!=0)
        {
            rem=n%10;
            n=n/10;
            res=res*10+rem;
        }
        if(res>INT_MAX || res<INT_MIN)
        {
            return 0;
        }
        else
        {
        return res;
    }
    }
};
