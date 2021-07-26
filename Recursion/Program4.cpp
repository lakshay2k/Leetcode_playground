#include<bits/stdc++.h>
using namespace std;

void incrdecr(int n)
{
    if(n==1)
    {
        cout<<1;
        return;
    }

    cout<<n<<endl;
    incrdecr(n-1);
    cout<<n<<endl;
}

int main()
{
    incrdecr(5);
    return 0;
}
