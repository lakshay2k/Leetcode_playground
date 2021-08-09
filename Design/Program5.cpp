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
        //first we will print the spaces
        for(int j=1;j<=row;j++)
        {
            if(j<=row-i)
            cout<<"  ";
        }
          // then we will print the five stars which will make it up a rhombus
        for(int k=1;k<=row;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    

    return 0;
}
