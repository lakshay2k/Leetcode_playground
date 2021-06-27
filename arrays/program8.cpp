class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //moving the non-zero elements in front as we encounter then
        //j is used for keeping relative order of indexes -> 0 1 2 ..
        //using nums[i]!=0 we select the non zero elements
        int k=nums.size(),j=0,i;
        for(i=0;i<k;i++){
            if(nums[i]!=0){
                swap(nums[j++],nums[i]);
            }     
        }
    }
};
