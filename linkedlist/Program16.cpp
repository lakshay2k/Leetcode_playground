// performing push and pop operations in stack using arrays
// Question link: https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1


void MyStack :: push(int x)
{
    // Your Code
    top++;
    arr[top] = x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code 
    if(top==-1)
    return -1;
    else
    {
        return arr[top--];
    }
}
