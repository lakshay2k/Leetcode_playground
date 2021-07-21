class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //first sorting the number so that duplicate number came adjacent to each other
       sort(nums.begin(),nums.end());
        //apply adjacent_find function of c++ stl library and return true if duplicate is there
       return adjacent_find(nums.begin(),nums.end())!=nums.end();
        }
};
