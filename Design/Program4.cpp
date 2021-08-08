// Write the program to print the butterfly pattern using stars
/*
Pattern is: 
*             * 
* *         * * 
* * *     * * * 
* * * * * * * * 
* * * * * * * * 
* * *     * * * 
* *         * * 
*             *

*/

#include <iostream>
using namespace std;

int main()
{
    int row =4;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=2*row;j++)
        {
            if(j>i && j<=(2*row-2*i)+i)
            cout<<"  ";
            else
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=2*row;j++)
        {
            if(j>i && j<=(2*row-2*i)+i)
            cout<<"  ";
            else
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}
