// Question Link: https://practice.geeksforgeeks.org/problems/print-the-pattern-set-1/1#


void printPat(int n)
{
//Your code here
int a=n;
    //Keep decreamenting a to keep count of dollar at each newline
while(a>0)
{
    //we have to print values of integers N times hence, we will be using two loops
    //1. for keeping N rows
for(int i=n;i>0;i--)
{
    //2. for printing numbers N times
    for(int j=a;j>0;j--)
    {
        cout<<i<<" ";
    }
}
    cout<<"$";
a--;
}

}
