class Solution {
public:
    int mypeakfunc(vector<int> nums, int low, int high)
    {
        //for logarithmic complexity, we will use binary search 
        int n=nums.size();
        int mid, l=low, r=high;

        //calculatig the middle element
            mid = l + (r-l)/2;

        //if the mid elememt satisfies the conditions in question, then return mid
             if((mid==0|| nums[mid]>nums[mid-1]) && (mid==n-1 ||nums[mid]>nums[mid+1]))
                return mid;   

        //else if element left to mid is greater, go for left part
            else if(mid>0 && nums[mid-1]>nums[mid])
            {
                return mypeakfunc(nums,l,mid-1);
            }
        //otherwise go for right part
            else
            {
                return mypeakfunc(nums,mid+1,r);
            }
    }

    int findPeakElement(vector<int>& nums) {
        //caling my peak function
        return mypeakfunc(nums,0,nums.size()-1);
    }
};
