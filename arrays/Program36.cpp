// Find prime number upto N elements
// Question link : https://practice.geeksforgeeks.org/problems/sieve-of-eratosthenes5242/1



class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector<bool> check(N+1,true);
        vector<int> prime;
        
        for(int p=2;p*p<=N;p++)
        {
            if(check[p])
            {
                for(int i=p*p;i<=N;i=i+p)
                {
                    check[i]=false;
                }
            }
        }
        
        for(int p=2;p<=N;p++)
        {
            if(check[p])
            prime.push_back(p);
        }
        
        return prime;
    }
};
