class Solution {
public:
vector<vector> groupAnagrams(vector& strs) {

    //taking size of string vector given
    int n = strs.size();
    unordered_map<string, vector<string>> mymap;
    //creating map and storing the sorted alpahabets as keys and strings as value which is a vector
    for(auto x : strs)
    {
        string temp = x;
        sort(temp.begin(),temp.end());
        //values having same key are stored in vectors
        mymap[temp].push_back(x);
    }
    vector<vector<string>> myresult;
    //pushing vectors inside the vector to denote groups
    for(auto x : mymap)
    {
        myresult.push_back(x.second);
    }
    //return result
    return myresult;
}