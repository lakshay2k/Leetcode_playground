class Solution {
public:
    
    //declaring global variable
    int N,M;
    
    //it is 2D vector storing dynamic programming results
    vector<vector<int>>subresults;
    
    int D_P(int x,int y, vector<vector<int>> &matrix)
    {
        if(subresults[x][y])
            return subresults[x][y];
        
        //creating direction vector having x and y coordinates of 4 directions i.e T B L R
        vector<vector<int>> dir = {{-1,0},{1,0},{0,1},{0,-1}};
        int ans = 1;
        
        for(int i = 0;i<4;i++)
        {
            int X_corr = x + dir[i][0];
            int Y_corr = y + dir[i][1];
            
            //if the cell location is not valid , mostly for the cases of boundary elements
            if(X_corr<0 || X_corr>=N || Y_corr<0 || Y_corr>=M)
                continue;
            //because if the elements surrounding are less than it itself is greatest and we continue
            if(matrix[X_corr][Y_corr] <= matrix[x][y])
                continue;
            ans = max(ans,1+D_P(X_corr,Y_corr,matrix));
        }
        return subresults[x][y] = ans;
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        
        //storing length of rows and column
        int n = matrix.size();
        if(n == 0)
            return 0;
        int m = matrix[0].size();
        N = n;
        M = m;
        //making dp vector of same size of given matrix
        subresults = vector<vector<int>>(n,vector<int>(m,0));
        
        //res stores the length of maximum sequence
        int res = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                //we call dfs for every element in given matrix 
                res = max(res,D_P(i,j,matrix));
            }
        }
        return res;
    }
};