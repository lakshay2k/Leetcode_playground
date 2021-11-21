class Solution {
public:
    
    void merge(vector<ListNode*>& lists, int index1, int index2)
    {
        
        //making new nodes res that combines two linkedlist l1 and l2
        ListNode* res = new ListNode(0);
        
        //sorting pointer keeps track of the smallest number and adds to the result node.
        ListNode* sort_ptr = res;
        
        //we are extracting the linkedlist from the respective i8ndexesl.
        ListNode* l1 = lists[index1];
        ListNode* l2 = lists[index2];
        
        //while both the lists are not null
        while(l1!=NULL || l2!=NULL)
        {
            //if any linkedlist is null we simply add to the next of sorting pointer.
            if(l1==NULL)
            {
                sort_ptr->next=l2;
                break;
            }
            if(l2==NULL)
            {
                sort_ptr->next = l1;
                break;
            }
            
            //checking the values, we simply add the smallest to the sorting pointer
            if(l1->val <= l2->val)
            {
                sort_ptr->next = l1;
                l1=l1->next;
            }
            else
            {
                sort_ptr->next = l2;
                l2=l2->next;
            }
            //increamenting sortin pointer to next 
            sort_ptr = sort_ptr->next;
        }
        //we always from the combined linkedlist into the linkedlist at first index.
        lists[index1] = res->next;
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        //checking the boundary condition, i.e vector is empty or not.
        if(lists.size() == 0)
            return NULL;
        
        //initially we are starting with the intervals value to 1
        int interval = 1;
        int len = lists.size();
        
        //dry run to know and understand the link of concpet of merge nodes
        while(interval < len)
        {
            /*
            for ex [ [1,5,9], [4,8,9], [2,6,8],[1,4],[7,9,15]]
            indexes    0         1        2      3       4
            
            using this concept we call the merge as
            merge(0,1) merge(2,3)  interval=1 storing combined 0(2) and 1(3) in 0(2)
            merge(0,2)             interval=2 storing combined 0 and 2 in 0
            merge(0,4)             interval=4 storing combined 0 and 4 in 0
            */
            
            for(int i = 0;i<len-interval;i=i+interval*2)
                merge(lists,i,i+interval);
            //we increment the interval exponentially
            interval = interval*2;
        }
        
        //returning the list at index 0 as we we combined every node into first one
        return lists[0];
    }
};
