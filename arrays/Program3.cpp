class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //checking whether k steps can be taken in array or not
        int size = nums.size();
        k = k % size;
        
        //reversing the first half and second half separately and then combinely reversing 
        //the whole give bring the last(right) k steps in front
        //hence we will get our rotated array
        reverse(nums.begin(),nums.begin()+(size-k));
        reverse(nums.begin()+(size-k),nums.end());
        reverse(nums.begin(),nums.end());
    }
};
