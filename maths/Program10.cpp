// Question link : https://practice.geeksforgeeks.org/problems/closest-number5728/1


class Solution {
  public:
  
    int closestNumber(int N , int M) {
        
      //calculating quotient for finding the roots
        int quotient = N/M;
      //root1 can be the multiple of M
        int root1 = quotient*M;
      
        int root2;
      //calculating for root2 only when numbers are positive
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
