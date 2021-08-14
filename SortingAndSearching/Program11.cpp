#include <iostream>
using namespace std;

int Partition(int *arr, int start, int end)
{
    //partitioning as a concept is choosing one element as pivot and arranging the array such that the 
    //elements less than the pivot comes on left and elements more than pivot goes to right of it
    int pivot  = arr[end];  // assuming the end element as the index
    int pindex = start;

    for(int i=start;i<end;i++)
    { 
        //checkign the smaller elements and replacing them before the pivot
        if(arr[i]<=pivot)
        {
            int temp = arr[pindex];
            arr[pindex] = arr[i];
            arr[i] = temp;
            pindex++;
        }
    }
    //now the end element which was  choosen as the pivot will come at its appropriate index after partitioning
    int temp = arr[pindex];
    arr[pindex] = arr[end];
    arr[end] = temp;
    return pindex;
}


void QuickSort(int *arr, int start, int end)
{
    //base condition
    if(start< end)
    {
        //diving the array using the pivot element by partitioning
        int pivot  = Partition(arr,start,end);
        
        //performing quicksort on the left and the right subarray and stopping untill we reach the last element or invalid index
        QuickSort(arr, start,pivot-1);   //left subarray part
        QuickSort(arr, pivot+1,end);   //right subarray part
    }
}


int main()
{
    int arr[] = {10,5,67,64,8,65,454,54,2,5,98,65,84,61,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,0,len);
    
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}
