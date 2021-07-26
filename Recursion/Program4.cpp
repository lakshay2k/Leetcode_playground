//Given a value of N print the Increasing and Decreasing Pattern till 1 from N

#include<bits/stdc++.h>
using namespace std;

//recursive function 
void incrdecr(int n)
{
    //if we get till 1 simply print 1;
    if(n==1)
    {
        cout<<1;
        return;
    }
    
    //For printing the decreasing pattern we will call print before the recursive call
    //and for the increasing pattern, we will call print after the recursive call
    cout<<n<<endl;
    incrdecr(n-1);
    cout<<n<<endl;
}

int main()
{
    //calling from the main function
    incrdecr(5);
    return 0;
}
