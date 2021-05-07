class Solution {
public:
    bool checkIfExist(vector<int>& arr) {

        int i,j,len=0;
        for(i=0;i<arr.size();i++)
        {
            len=len+1;
        }

        for(i=0;i<len;i++)
        {
            for(j=0;j<len;j++)
            {
                if(arr[i] == 2*arr[j] && j!=i)
                {
                if((arr[i]>0 && 2*arr[j]<0) || (arr[i]<0 && 2*arr[j]>0))
                {
                    return false;
                }
                else
                    return true;
                }
            }
        }

        return false;
    }
};
                  