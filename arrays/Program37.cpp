// Write a Program that gives the sum of prime numbers upto n
// Question link: https://practice.geeksforgeeks.org/problems/sum-of-all-prime-numbers-between-1-and-n4404/1


class Solution{
	public:
   	long long int prime_Sum(int n){
		
		//using long long becuase the number can be large enough so that 
   	    long long int sum = 0;  // sum initially zero to add up the numbers
   	    vector<bool> check(n+1,true);  // array that will keep a check on prime numbers(true) otherwise false
        
		//the square of a number is within the range then we can take it otherwise not.
        for(int p=2;p*p<=n;p++)
        {
		//we make all the factors of that numbers as false
            if(check[p])
            {
                for(int i=p*p;i<=n;i=i+p)
                {
                    check[i]=false;
                }
            }
        }
		//at the end we are left with true ones and they are prime numbers
        
		//summing all the true(prime) numbers 
        for(int p=2;p<=n;p++)
        {
            if(check[p])
            sum=sum+p;
        }
   	    
   	return sum; 
   	}    
};
