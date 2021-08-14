// Star Pattern:



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
            cout<<"* ";
        }
        if(i>1)
        {
            for(int l=2;l<=i;l++)
            cout<<"* ";
        }
        cout<<endl;
    }
    
    for(int i=row;i>=1;i--)
    {
        int k=i;
        for(int j=1;j<=row;j++)
        {
            if(j<=row-i)
            cout<<"  ";
            else
            cout<<"* ";
        }
        if(i>1)
        {
            for(int l=2;l<=i;l++)
            cout<<"* ";
        }
        cout<<endl;
    }
    
    

    return 0;
}

