#include <iostream>
using namespace std;

int main()
{
    /*
    1
    12
    123
    1234
    12345
    */
    
    
    //number of rows and columns is 5
    int rows = 5;
    for(int i=1;i<=5;i++)
    {
        //used for printing the number till the value of i
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        //after every new row, we add a new line to it.
        cout<<endl;
    }
    return 0;
}
