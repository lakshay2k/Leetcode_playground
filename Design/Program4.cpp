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
    
    // First try to make the upper half of the pattern, just traverse form 1->n
    for(int i=1;i<=row;i++)
    {
        // the rows are 4 but the columns are 2*4
        for(int j=1;j<=2*row;j++)
        {
            //the relation is for every row the stars are as much rowno in the starting and at the end 
            // like one in the start and end, then two in the start and end
            if(j>i && j<=(2*row-2*i)+i)
            cout<<"  ";
            else
            cout<<"* ";
        }
        cout<<endl;
    }
    
    //for the below second half just traverse from n->1
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
