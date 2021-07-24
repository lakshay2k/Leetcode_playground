class MinStack {
public:
    /** initialize your data structure here. */
    stack<pair<int,int>> mystack;
    MinStack() {
        while(!mystack.empty())
            mystack.pop();
    }
    
    void push(int x) {
        if(mystack.empty())
            mystack.push({x,x});
        else
        {
            mystack.push({x,min(x,mystack.top().second)});
        }
    }
    
    void pop() {
        mystack.pop();
    }
    
    int top() {
        return mystack.top().first;
    }
    
    int getMin() {
        return mystack.top().second;
        
    }
};
