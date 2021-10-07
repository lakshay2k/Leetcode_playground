// Question link: https://practice.geeksforgeeks.org/problems/series-gp4646/1



class Solution{
	public:
   	int Nth_term(int a, int r, int n){
   	    // Code here
   	    int x=1;
   	    for(int i=1;i<n;i++)
   	    {
   	        x=(x*r)%1000000007;
   	    }
   	    cout<<"1: "<<x<<endl;
   	    
   	    x = (x*a)%1000000007;
   	    cout<<"2: "<<x;
   	    return x;
   	}    
};
