// Question link: https://practice.geeksforgeeks.org/problems/reverse-digit0316/1#


class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    // Code here
		    long long int rem,temp,sum=0;
		    temp=n;
		    while(temp)
		    {
		        rem=temp%10;
		        sum = sum*10+rem;
		        temp=temp/10;
		    }
		    return sum;
		}
};
