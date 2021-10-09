// Question Link: https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1



class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int rem=0,sum=0,temp=n;
        while(temp)
        {
            rem=temp%10;
            sum = sum +rem*rem*rem;
            temp=temp/10;
        }
        if(sum == n)
        return "Yes";
        else
        return "No";
    }
};
