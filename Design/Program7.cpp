// Star Pattern:

/*
Output is:

        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        *
*/

#include <iostream>

using namespace std;

int main()
{
    //cout<<"Hello World";
    
       //we will divide the pattern in two halves first - upperhalf and lowerhalf
    int row = 5;
       
       //upper half, traversal is from 1-> row
    for(int i=1;i<=row;i++)
    {
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
    
       //lower half, only traversal changes from row -> 1
    for(int i=row;i>=1;i--)
    {
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

