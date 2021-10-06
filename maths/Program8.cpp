// Question link: https://practice.geeksforgeeks.org/problems/series-ap5310/1


class Solution {
  public:
  
    int nthTermOfAP(int A1, int A2, int N) {
        // code here
      //calculating the difference of terms (d)
        int d = A2 - A1;
      
      //Formula is An = A + (n-1)*d
        int res = A1 + (N-1)*d;
      //returning the result
        return res;
    }
};
