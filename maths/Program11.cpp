// Question Link: https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1


class Solution {
  public:
    string armstrongNumber(int n){
        // code here
      //taking variables to store the rem, quotient and sum.
        int rem=0,sum=0,temp=n;
        while(temp)
        {
            rem=temp%10;
          //armstrong number has the sum of cubes of every digit equal to the number itself.
            sum = sum +rem*rem*rem;
            temp=temp/10;
        }
      //if the condition is satisfied then it is armstrong number otherwise not.
        if(sum == n)
        return "Yes";
        else
        return "No";
    }
};
