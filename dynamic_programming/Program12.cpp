//Question link:
// https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        //2-d vector for pascal triangle pattern with given num. of rows
        vector<vector<int>> pascal(numRows);
        
        //moving from 0th row -> last row
        for(int i=0;i<numRows;i++)
        {
            //resizing the first row based on i such as 1st row will have 1 elem, 2nd row will have 2 elem, 3rd row will have 3 elem, 4th row will have 4 elem.......
            pascal[i].resize(i+1);
            
            //interesting thing to note: first and last elem of specific row is always 1
            pascal[i][0] = pascal[i][i] = 1;
            
            //for the second element in each row, we can calculate by previous two elements [i-1][j](previous row right elem) , [i-1][j-1](prev row left elem)
            for(int j = 1; j<i; j++)
            {
                pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
        }
        //returning the pascal triangle pattern stored in 2-d vector pascal.
        return pascal;
    }
};
