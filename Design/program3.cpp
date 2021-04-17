class NestedIterator {

//creating resultant vector and a pointer to each element in nested list
vector<int> result;
int ptr=0;
public:

void myfunction(vector<NestedInteger> &nestedList)
{
    for(int i =0;i<nestedList.size();i++)
    {
        //we keep the integer or we pass the list using recursion again till we get integers
        if(nestedList[i].isInteger())
            result.push_back(nestedList[i].getInteger());
        else
            myfunction(nestedList[i].getList());
    }
}

NestedIterator(vector<NestedInteger> &nestedList) {
    myfunction(nestedList);
}
//here next returns the value of result vector at specified locaton and increment for later use
int next() {
    return result[ptr++];
    
}
//here condition is pointer is less than rsultant vector size then it returns true otherwise false
bool hasNext() {
    return ptr < result.size();
}
};