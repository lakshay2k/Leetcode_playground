//# palindromic pattern of numbers

#include <iostream>

using namespace std;

int main()
{
    //cout<<"Hello World";
    
    int row = 5;
    for(int i=1;i<=row;i++)
    {
        int k=i;
        for(int j=1;j<=row;j++)
        {
            if(j<=row-i)
            cout<<"  ";
            else
            cout<<k--<<" ";
        }
        if(i>1)
        {
            for(int l=2;l<=i;l++)
            cout<<l<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}
