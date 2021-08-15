#include <iostream>
using namespace std;

int main()
{
    
/*
1
22
333
4444
55555
*/
    
    // number of rows and columns is 5
    int rows = 5;
    for(int i=1;i<=5;i++)
    {
        //this is for times the numbers are printing in a row
        for(int j=1;j<=i;j++)
        {
            //we will be printing i value j times as per question 
            cout<<i;
        }
        //we add a new line after each row
        cout<<endl;
    }
    return 0;
}
