// Question link : https://practice.geeksforgeeks.org/problems/closest-number5728/1


class Solution {
  public:
    int closestNumber(int N , int M) {
        
        int quotient = N/M;
        int root1 = quotient*M;
        int root2;
        if(N*M > 0)
        root2 = M*(quotient + 1);
        else
        root2 = M*(quotient - 1);
        
        if(abs(N-root1)<abs(N-root2))
        return root1;
        else 
        return root2;
    }
};
