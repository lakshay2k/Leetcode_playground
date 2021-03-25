class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        //sorting the element using library sort function
        sort(nums.begin(),nums.end());

        //and returning the kth element
        return nums[nums.size()-k];
    }
};