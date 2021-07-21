class Solution {
public:

    void gameOfLife(vector<vector<int>>& board) {
        
        int r = board.size(),c = board[0].size();
        //declaring a copy vector having al fields to zero,
        vector<vector<int>> res(r,vector<int>(c,0));
        
        //x and y coordinates of a field in matrix to check its 8 neighbours
        int x_corr[8] = {-1,-1,0,1,1,1,0,-1};
        int y_corr[8] = {0,1,1,1,0,-1,-1,-1};
        
        for(int i = 0;i<r;i++)
        {
            for(int j = 0;j<c;j++)
            {
                //livecounts will be new for each field or cell
                int livecounts = 0;
                for(int k = 0;k<8;k++)
                {
                    int x = i+x_corr[k];//checking all 8 x coordinates
                    int y = j+y_corr[k];//checking all 8 y coordinates
                    
                    //first check is it valid by <=0 and <r,c then if cell is live then increament livecount
                    if(x>=0 && x<r && y>=0 && y<c && board[x][y]==1)
                        livecounts++;
                }
                
                //as we know all the cells in the res are default to zero so we will focus on only which we have to make live.
                
                //for dead cell , if three neighbour cells are alive then make dead cell also alive
                if(board[i][j] == 0 && livecounts == 3)
                    res[i][j] = 1;
                //for liev cells only wil 2 or 3 live neighbours will go to next generation
                else if(board[i][j] == 1)
                {
                    
                    //we are not mentioning all live cells rules because our vector is by default 0 or dead.
                    if(livecounts ==2 || livecounts == 3)
                        res[i][j] = 1;
                }
            }
        }

        //program will check for board for assigning values of res into the board.
        board = res;
    }
};
