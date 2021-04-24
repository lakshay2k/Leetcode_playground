class Solution {
public:
    int countPrimes(int n) {
        
        //creating a bool vector of size n and all values to false
        vector<bool> prime_vec;
        for(int i=0;i<n;i++)
            prime_vec.push_back(false);
        int count = 0;
        
        //we mark all factors of a (number upto n) as marked and the left ones comes out to be primeNO.
        //for ex 2-false, 4-true, 6-true , 8-true  n=10
        //       3-false,         already  9-true 
        // if n is dividible by p, n=p*q, p<sqrt(p)

        for(int i = 2;i*i <= n;i++)
        {
            if(prime_vec[i] == false)
            {
                for(int j = i*i; j<=n; j=j+i)
                    prime_vec[j]=true;
            }
        }
        
        //now the fields left with false in vector is our prime numbers
        for(int i=2;i<n;i++)
        {
            if(prime_vec[i]==false)
                count=count+1;
        }
        
        return count;
    }
};