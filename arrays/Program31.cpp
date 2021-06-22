class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        //map for keeping track of indices and its value
        unordered_map<int,int> mymap;
        
        //comparing everytime we find duplicate and checking the difference
        for(int i=0;i<nums.size();i++)
        {
            if(mymap.count(nums[i]) && i-mymap[nums[i]]<=k)
                return true;
            
            //if does not satisfy the condition , we add it to map
            mymap[nums[i]]=i;
        }
        return false;
    }
};
