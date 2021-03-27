class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //made two functions named findfirst() and findsec()
        int first = findfirst(nums,target);
        int second = findsec(nums,target);
        
        //storing it in result vector
        vector<int> res;
        res.push_back(first);
        res.push_back(second);
        return res;
    }
    
    int findfirst(vector<int> &nums,int target)
    {
        //applying binary search and checking if mid is not equal to mid-1 then only returning mid.
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(nums[mid]>target)
                high=mid-1;
            else if(nums[mid]<target)
                low=mid+1;
            else
            {
                if(mid==0 || nums[mid]!=nums[mid-1])
                    return mid;
                else
                    high=mid-1;
            }
        }
        return -1;
    }
    
    int findsec(vector<int> &nums,int target)
    {
        //applying binary search checking the largest occurence of target by
        //checking id mid is not equal to number after it, then only returning mid
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(nums[mid]>target)
                high=mid-1;
            else if(nums[mid]<target)
                low=mid+1;
            else
            {
                if(mid==nums.size()-1 || nums[mid]!=nums[mid+1])
                    return mid;
                else
                    low=mid+1;
            }
        }
        return -1;
    }
};