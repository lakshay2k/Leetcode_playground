class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //Creating set to remove the duplicate triplets;
        set<vector<int> > s;
        //sorting to pick up the smallest and greatest number according to sum
        sort(nums.begin(),nums.end());
        
        int i,j,k;
        int n=nums.size();
        for(i=0;i<n-2;i++)
        {
            j=i+1;
            k=n-1;
            while(j<k)
            {
                int sum = nums[i]+nums[j]+nums[k];
                //given problem sum should be 0
                if(sum==0)
                {
                    vector<int> temp(3);
                    temp[0]=nums[i];
                    temp[1]=nums[j];
                    temp[2]=nums[k];
                    s.insert(temp);
                    j++;
                    k--;
                }
                //decreamenting last pointer to reduce sum as vector is sorted in ascending order.
                else if(sum>0)
                {
                    k--;
                }
                //increasing the first pointer to add sum as vector has low values in starting.
                else if(sum<0)
                {
                    j++;
                }
            }
    }
        //transferring values from set to vector.
        vector<vector<int>> myresult(s.begin(),s.end());
            return myresult;
        
       // we could have used the 2d vector throughout but it will lead to duplicate triplets coming in solutions.  
        
    }
};