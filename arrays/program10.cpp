class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       //first we will transpose the matrix
        int n=matrix[0].size();
        int i,j,row;
        for(i=0;i<n-1;i++)
        {
            for(j=i;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        //now we will flip by row to row
        for(row=0;row<n;row++)
        {
            int temp;
            int start=0,end=n-1;
            while(start<=end)
            {
                temp=matrix[row][start];
                matrix[row][start++]=matrix[row][end];
                matrix[row][end--]=temp;
            }
        }
    }
};