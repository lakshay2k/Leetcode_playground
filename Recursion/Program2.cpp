//Problem statement is to print the Triangle/ pyramid of N rows 

#include <iostream>
using namespace std;

void printpattern(int n, int j)
{
    //if rows are complete then return
    if(n==0)
    return;
    
    //first we go to the first row and while coming back we will be printing the stars
    if(j==0)
    {
        //cout<<"*";
        printpattern(n-1,0);  //keep decreasing the n untill we reach first row
        cout<<endl;
    }
    
    //now printing the stars based on the conditions while coming back such as 0<1(*) , 0<2(**), 0<3(***) ......
    if(j<n)
    {
    cout<<"*";
    printpattern(n,j+1);
    //cout<<n<<endl;
    }
    
    //terminating when j==n like 0<1 -> {1<1} similarly for 0<2 -> 1<2 -> {2<2}
    if(j==n)
    {
     return;   
    }
}

int main()
{
    //cout<<"Hello World";
    printpattern(5,0);

    return 0;
}
