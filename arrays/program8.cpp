class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=nums.size();
        int num=count(nums.begin(), nums.end(), 0); //counting number of zeros in array
        int j=0;
        for(int i=0;i<k;i++){
            if(nums[i]!=0){
                nums[j]=nums[i]; //Putting non zero element in starting of array
                j++;
            }     
        }
       //Putting the total number of zeros in end of the array
        while(num!=0){
        nums[k-1]=0;
            k--;
            num--;
        }
        
    }
};