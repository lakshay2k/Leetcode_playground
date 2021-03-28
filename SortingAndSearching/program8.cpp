class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //if vector is empty return vector
        int i;
        if(intervals.size()==1)
            return intervals;

        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        
        //pushin first pair value to resul to check with others
        res.push_back({intervals[0][0],intervals[0][1]});
        
        
        for(i=1;i<intervals.size();i++)
        {
            //checking if the second element of first value is greater than first values of second element
            if(res[res.size()-1][1]>=intervals[i][0])
            {
                //if both values at second places are same, then we take minimum of first values
                if(res[res.size()-1][1]==intervals[i][1])
                {
                    int minimum = min(res[res.size()-1][0],intervals[i][0]);
                    res[res.size()-1][0]=minimum;
                }
                
                //if take min and max of first and second values respectively
                else
                {
                    int minimum = min(res[res.size()-1][0],intervals[i][0]);
                    int maximum = max(res[res.size()-1][1],intervals[i][1]);
                    res[res.size()-1][0]=minimum;
                    res[res.size()-1][1]=maximum;
                }
            }
            else
                res.push_back(intervals[i]);
        }
        return res;
    }
};