// Question link : https://practice.geeksforgeeks.org/problems/perfect-numbers3207/1



class Solution {
  public:
    int isPerfectNumber(long long N) {
      
      //Finding the factors and adding up all the factors
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
      //if sum is equal to N then , return 1 otherwise 0;
        if(sum == N)
        return 1;
        return 0;
    }
};
