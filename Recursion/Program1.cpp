#include <iostream>
using namespace std;

//recursive function
void func(int n,int j)
{
    if(n<=0)
    return;
    //printing n rows everytime n decreases
    if(j<n)
    {
        cout<<"*";
        //print n stars
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
