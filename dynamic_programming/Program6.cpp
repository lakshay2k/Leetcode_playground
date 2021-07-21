class Solution {
public: 

    int uniquePaths(int m, int n) {
        
        //rows=m , col = n
        int myarr[m][n];
        
        //making the starting row and column to 1 
        for(int i=0;i<m;i++)
            myarr[i][0]=1;
        for(int i=0;i<n;i++)
            myarr[0][i]=1;
        
        //adding the top and the left number of chances
        int r,c;
        for(r=1;r<m;r++)
        {
            for(c=1;c<n;c++)
                myarr[r][c] = myarr[r][c-1] + myarr[r-1][c];
        }
        
        //the last element gives the total chances to reach it
        return myarr[m-1][n-1];

    }
};
