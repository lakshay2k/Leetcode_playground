class Solution {
public:
    
    //finding maximum index or PIVOT element in lamen terms
    int max_index(vector<int> nums)
    {
// dividing the array into two sorted arrays
        int start = 0, end = nums.size();
        int front=nums[0];
        int mid = (start + end)/2;
        while(start!=end-1)
        {
            int mid_term = nums[mid];
            if(mid_term>front)
            {
                start = mid;
            }
            else if(mid_term<=front)
            {
                end=mid;
            }
            else assert(false);
            mid = (start + end)/2;
        }
        return mid;
    }
    
    //Code for binary search
    int binary_search(vector<int> nums, int target, int start, int end)
    {
        if(start>=end)
            return -1;
        if(target<nums[start] && target>nums[end-1])
            return -1;
        int mid = (start + end)/2;
        while(start<end)
        {
            int mid_term = nums[mid];
            if(mid_term<target)
                start = mid+1;
            else if(mid_term>target)
                end=mid;
            else
                return mid;
            mid = (start+end)/2;
        }
        return -1;
    }
    //divide the array into two parts and then perform binary search
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0)
            return -1;
        int maximum_index = max_index(nums);
        return max(binary_search(nums,target,0,maximum_index+1),binary_search(nums,target,maximum_index+1,n));
    }
};