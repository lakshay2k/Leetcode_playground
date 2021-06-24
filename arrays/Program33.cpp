class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> mymap;
        for(int i=0;i<nums.size();i++)
        {
            mymap[nums[i]]++;
        }
        vector<int> res;
        for(auto x:mymap)
        {
            if(x.second == 1)
                res.push_back(x.first);
        }
        return res;
    }
};
