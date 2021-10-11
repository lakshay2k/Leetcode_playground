// Question link: https://practice.geeksforgeeks.org/problems/sum-of-digit-is-pallindrome-or-not2751/1


class Solution {
  public:
  
    int isDigitSumPalindrome(int N) {
        // code here
        int sum=0,sum2=0;
        int rem;
        int temp=N;
      //calculating sum of digits of a number
        while(temp)
        {
            rem = temp%10;
            sum=sum+rem;
            temp=temp/10;
        }
        temp=sum;
      //checking if the number is palindrome or not
        while(temp)
        {
            rem = temp%10;
            sum2=sum2*10+rem;
            temp=temp/10;
        }
      //if condition is satisfied then it is palindromic otherwise not
        if(sum2 == sum)
        return 1;
        else
        return 0;
    }
};
