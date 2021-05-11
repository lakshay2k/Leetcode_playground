class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i,j,len=0,count=0,count1=0,count3=0;
        for(i=0;i<arr.size();i++)
        {
            len=len+1;
        }
        for(i=0;i<len-1;i++)
        {
            if(len>=3)
            {
            if(arr[i]<arr[i+1])
            {
               count = count + 1;
            }
            else
            {
                for(j=i;j<len-1;j++)
                {
                    if(j==0 || arr[j] == arr[j+1])
                        return false;
                    if(arr[j]>arr[j+1])
                    {
                        count1=count1+1;
                    }
                    else
                        count3=1;
                }
                if(count1>0 && count3==0)
                    return true;
                else 
                    return false;
            }
            }
        }
        return false;  
    }
};