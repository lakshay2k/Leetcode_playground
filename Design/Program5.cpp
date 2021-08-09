//Rhombus Pattern in C++ 
/*
Pattern is:

        * * * * * 
      * * * * * 
    * * * * * 
  * * * * * 
* * * * *

*/


#include <iostream>

using namespace std;

int main()
{
    //cout<<"Hello World";
    
    int row = 5;
    for(int i=1;i<=row;i++)
    {
        
        for(int j=1;j<=row;j++)
        {
            if(j<=row-i)
            cout<<"  ";
        }
        for(int k=1;k<=row;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    

    return 0;
}
