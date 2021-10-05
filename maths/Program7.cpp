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
