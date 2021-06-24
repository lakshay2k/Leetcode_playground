class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        //creating the map for storing the element with its occurence
        unordered_map<int,int> mymap;
        for(int i=0;i<nums.size();i++)
        {
            mymap[nums[i]]++;
        }
        
        //adding the element whose occurences are 1 to the result vector and returning it.
        vector<int> res;
        for(auto x:mymap)
        {
            if(x.second == 1)
                res.push_back(x.first);
        }
        return res;
    }
};
