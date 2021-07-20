class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> ar(n+1,0);
        //ar[0]=0;
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
