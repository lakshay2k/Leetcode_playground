class Solution {
public:
    vector<int> countBits(int n) {
        
        //creating a vector of n+1 size and initializing all to zero
        vector<int> ar(n+1,0);
        //ar[0]=0;
        /*
Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101
        */
        //if we observe clearly, number at even places has same number of ones at their index/2
        //for the odd it is just one more than half of index element
        for(int i=1;i<=n;i++)
        {
            if(i%2 == 0)
                ar[i] = ar[i/2];
            else
                ar[i] = 1 + ar[i/2];
        }
        return ar;
    }
};
