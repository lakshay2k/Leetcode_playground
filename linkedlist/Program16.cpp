// performing push and pop operations in stack using arrays
// Question link: https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1


void MyStack :: push(int x)
{
    // Your Code
    //inititally the top points to -1 so we will first increament it evertime and then store the element at that index
    top++;
    arr[top] = x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code 
    // for removing elements first we check if there are any elements present or not in the stack//array
    if(top==-1)
    return -1;
    else
    {
        //simply return the top element and decreament the top count
        return arr[top--];
    }
}
