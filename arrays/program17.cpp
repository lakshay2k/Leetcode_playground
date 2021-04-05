class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        //approach towards problem is:
        // divide the elements on basis of product of its left elments and products of its right element.
        //For ex [1,2,3,4] no=3 left prod = 2*1, right_prod = 4, total prod for elemnt3 is 4*2*1(L*R)
        
        //creating product vector;
        vector<int> prod(nums.size());
        
        //first we are calculating left prod then performing right prod same array to reduce space complexity
        //left prod for first element is = 1
        prod[0]=1;
        
        for(int i=1;i<nums.size();i++)
        {
            prod[i] = prod[i-1]*nums[i-1]; //dry run and understand concept
        }
        
        //for right product, right prod of last element is = 1
        int R=1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            prod[i] = prod[i]*nums[i+1]*R;
            R = R*nums[i+1];  //dry run and understand the concept . please its must.
        }
        return prod;
    }
};