//Problem statement is to print the Triangle/ pyramid of N rows 

#include <iostream>
using namespace std;

void printpattern(int n, int j)
{
    if(n==0)
    return;
    if(j==0)
    {
        //cout<<"*";
        printpattern(n-1,0);
        cout<<endl;
    }
    if(j<n)
    {
    cout<<"*";
    printpattern(n,j+1);
    //cout<<n<<endl;
    }
}

int main()
{
    //cout<<"Hello World";
    printpattern(5,0);

    return 0;
}
