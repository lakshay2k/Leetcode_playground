
class Solution{
	
	public:
   	long long int prime_Sum(int n){
   	    long long int sum = 0;
   	    vector<bool> check(n+1,true);
        
        for(int p=2;p*p<=n;p++)
        {
            if(check[p])
            {
                for(int i=p*p;i<=n;i=i+p)
                {
                    check[i]=false;
                }
            }
        }
        
        for(int p=2;p<=n;p++)
        {
            if(check[p])
            sum=sum+p;
        }
   	    
   	return sum; 
   	}    
};
