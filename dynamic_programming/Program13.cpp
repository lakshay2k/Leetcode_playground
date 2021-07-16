class Solution {
public:
    int tribonacci(int n) {
        vector<int> terms(38,0);
        terms[0]=0;
        terms[1]=1;
        terms[2]=1;
        for(int i=3;i<=n;i++)
        {
            terms[i] = terms[i-1]+terms[i-2]+terms[i-3];
        }
        /*
        for(auto x: terms)
            cout<<x<<endl;
        */
        return terms[n];
    }
};
