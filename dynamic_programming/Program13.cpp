// Question Link: 
// https://leetcode.com/problems/n-th-tribonacci-number/

class Solution {
public:
    int tribonacci(int n) {
        //creating vector of highest size of n and initialising all with 0
        vector<int> terms(38,0);
        
        //tribonacci series takes the previous three integers so initialising the top three numbers
        terms[0]=0;  // first as 0
        terms[1]=1;  //second as 1
        terms[2]=1;   // third as 1
        
        //we start from 3 and keep calculating by adding its previous three integers.
        for(int i=3;i<=n;i++)
        {
            terms[i] = terms[i-1]+terms[i-2]+terms[i-3];
        }
        
        //just for checking the elements in terms for fibonacci series
        /*
        for(auto x: terms)
            cout<<x<<endl;
        */
        
        //returning the nth term
        return terms[n];
    }
};
