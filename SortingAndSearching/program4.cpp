class Solution {
public:
    //making a function to compare the seconf values of hashmap
    bool static sortsecond(pair<int,int>&a, pair<int,int>&b)
    {
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //creating hashmap to make key value pair having value and its occurences.
        unordered_map<int,int> mymap;
        for(int i=0;i<nums.size();i++)
        {
            //values of same key gets one incremented.
            mymap[nums[i]]++;
        }
        //creating pairs to sort based on the values / occurences i.e the second attribute
        vector<pair<int,int>> res(mymap.begin(),mymap.end());
        sort(res.begin(),res.end(),sortsecond);
        vector<int> ans;
        //storing back the first keys in the vector and returning it.
        for(int i=0;i<k;i++)
        {
            ans.push_back(res[i].first);
        }
        return ans;
    }
};