#include <iostream>
using namespace std;

void recur(int *arr, int i, int n, string osf)
{
    //base case is when the array is traversed means the index i is equal to n
    if(i==n)
    {
        cout<<"["<<osf<<"]\n";
        return;
    }
    
    //we will be storing the subsets in string osf
    //For a number in set, there are two choices to get included or not get included.
    //We can say for first number, he has chances to get included of not included in the rest of subsets to be formed
    //If we get for the n-1 elements then we can add the first similarly we can pass i+1 to recusrion to bring the other
    
    recur(arr,i+1,n,osf+to_string(arr[i])+","); //including the first elements
    recur(arr,i+1,n,osf); //not including the first elements
    
}

int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    recur(arr,0,n,"");
    return 0;
}
