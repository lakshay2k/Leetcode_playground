class Solution {
public:
    //code for binary search
    int binarysearch(vector<int>& nums,int low, int high,int target)
    {
        if(high<low)
            return 0;
        int mid = low + (high-low)/2;
        if(target == nums[mid])
            return mid;
        if(target>mid)
            return binarysearch(nums,mid+1,high,target);
        return binarysearch(nums,low,mid-1,target);
    }
    //code for finding the pivot element
    int findpivot(vector<int>& nums,int low, int high)
    {
        if(high<low)
            return -1;
        if(high==low)
            return low;
        int mid = low + (high - low)/2;
        if(mid<high && nums[mid]>nums[mid+1])
            return mid;
        if(mid>low && nums[mid]<nums[mid-1])
            return (mid-1);
        if(nums[low]>=nums[mid])
            return findpivot(nums,low,mid-1);
        return findpivot(nums,mid+1,high);
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int pivot = findpivot(nums,0,n-1);
        //if we dont find the pivot element, the array is not rotated at all
        if(pivot == -1)
            return binarysearch(nums,0,n-1,target);
        //if we found the pivot element, the first compare with the pivot element and then two subarrrays
        if(nums[pivot]==target)
            return pivot;
        if(nums[0]<=target)
            return binarysearch(nums,0,n-1,target);
        return binarysearch(nums,pivot+1,n-1,target);
    }
};