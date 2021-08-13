//# palindromic pattern of numbers
/*
Pattern is:

        1 
      2 1 2 
    3 2 1 2 3 
  4 3 2 1 2 3 4 
5 4 3 2 1 2 3 4 5

*/



#include <iostream>

using namespace std;

int main()
{
    //cout<<"Hello World";
    
    int row = 5;
    for(int i=1;i<=row;i++)
    {
            //we would be dividing the pattern into two halves-> left and right
        int k=i;
        for(int j=1;j<=row;j++)
        {
                //this if is for printing the spaces
            if(j<=row-i)
            cout<<"  ";
                //this is for printing the left side pattern of decreasing numbers
            else
            cout<<k--<<" ";
        }
            //this is for priniting the right side of pattern starting with 2
        if(i>1)
        {
            for(int l=2;l<=i;l++)
            cout<<l<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}
