class Solution {
  public:
    int nthTermOfAP(int A1, int A2, int N) {
        // code here
        int d = A2 - A1;
        int res = A1 + (N-1)*d;
        return res;
    }
};
