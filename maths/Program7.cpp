// Question Link: https://practice.geeksforgeeks.org/problems/print-the-pattern-set-1/1#


void printPat(int n)
{
//Your code here
int a=n;
while(a>0)
{
for(int i=n;i>0;i--)
{
    for(int j=a;j>0;j--)
    {
        cout<<i<<" ";
    }
}
    cout<<"$";
a--;
}

}
