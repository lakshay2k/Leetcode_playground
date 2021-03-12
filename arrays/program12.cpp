class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        //making vector of pairs
        vector<pair<int, int>> pairs;
        //using pairs to take row column pairs
        
        int i,j,r=matrix.size(),c=matrix[0].size();
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(matrix[i][j]==0)
                {
                    //pushing pair into vectors
                    pairs.push_back(make_pair(i,j));
                }
            }
        }
        for(i=0;i<pairs.size();i++)
        {
                int temp1=0,temp2=0;
            //making column zero
                while(temp1<r)
                {
                matrix[temp1][pairs[i].second]=0;
                temp1++;
                }
            //making row zero
                while(temp2<c)
                {
                    matrix[pairs[i].first][temp2]=0;
                    temp2++;
                }   
            //cout<<x.first<<"  "<<x.second;
            
            //i used the concept of vectors with pairs,
        }
    }
};