class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        //making result vector having all maxima's
        vector<int> result;
        deque<int> mydq;
        int i;
        if(nums.size() < k)
            return result;
        
        //we initially check for the first window size
        for(i=0;i<k;i++)
        {
            //if the qq is not empty and if the element after index of q front is replace front with next element index as our aim is to store index of max element in front
            //Note here front and back is same when i=0 and i=1 but for i=2 we compare back and pop back only so dont get confused with names
            while(!mydq.empty() && nums[i] > nums[mydq.back()])
                mydq.pop_back();
            mydq.push_back(i);
            //after executing full while loop at first posn of queue we get the maxn element index
        }
        
        for(;i<nums.size();i++)
        {
            //here we add the element of front index or max index element to resultant vector
            result.push_back(nums[mydq.front()]);
            
            // here we check the front element index front lie between i to k so we pop the front elements and we succeed in keeping dq size as 3 always
            while((!mydq.empty() && (mydq.front() <= i-k)))
                mydq.pop_front();
            
            //if the qq is not empty and if the element after index of q front is replace front with next element index as our aim is to store index of max element at front
            while((!mydq.empty() && (nums[i] >= nums[mydq.back()])))
                mydq.pop_back();
        
            // add index of max element to the back of dq
            mydq.push_back(i);
        }
        
        result.push_back(nums[mydq.front()]);
        return result;
    }
};