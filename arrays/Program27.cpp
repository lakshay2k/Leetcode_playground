class Solution {
public:

    void moveZeroes(vector<int>& nums) {
        
        //taking size in k variable
        int k=nums.size(),j=0,i;

        int num=count(nums.begin(), nums.end(), 0); //counting number of zeros in array
        
        for(i=0;i<k;i++){
            if(nums[i]!=0){
                swap(nums[j++],nums[i]);
            }     
        }
    }
};
