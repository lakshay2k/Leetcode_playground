class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> mymap;
        for(auto x : strs)
        {
            string temp = x;
            sort(temp.begin(),temp.end());
            mymap[temp].push_back(x);
        }
        vector<vector<string>> myresult;
        
        for(auto x : mymap)
        {
            myresult.push_back(x.second);
        }
        return myresult;
    }
};