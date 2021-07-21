#include <iostream>
using namespace std;

void func(int n,int j)
{
    if(n<=0)
    return; 
    if(j<n)
    {
        cout<<"*";
        func(n,j+1);
    }
    else
    {
        cout<<endl;
        func(n-1,0);
    }
}

int main()
{
    func(5,0);
    return 0;
}
