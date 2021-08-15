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
    
    int rows = 5;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
