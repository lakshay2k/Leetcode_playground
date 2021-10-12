// Question link : https://practice.geeksforgeeks.org/problems/perfect-numbers3207/1



class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        long long sum=1;
        for(long long i=1;i<sqrt(N);i++)
        {
            if(N%i==0)
            {
                if(N/i == i)
                sum=sum+i;
                else
                sum = sum + i + N/i;
            
            }
        }
        if(sum == N)
        return 1;
        return 0;
    }
};
