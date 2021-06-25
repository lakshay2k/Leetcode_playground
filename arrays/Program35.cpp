class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        //calculating the sizes of two given vectors
        int l1=nums1.size(),l2=nums2.size();
        vector<int> ans;
        
        //making elements of array as 1 at index which are elements of num1
            int arr[1001]={-1};
            for(int i=0;i<l1;i++){
                arr[nums1[i]]=1;
            }
        //then iterating through the second vector and checking whether index is already 1 or not.
            for(int i=0;i<l2;i++){
                //if element is present in array1 push to ans and make it -1 
                if(arr[nums2[i]]==1) {
                    ans.push_back(nums2[i]); 
                    arr[nums2[i]]=-1;
                }
            }
            return ans;
        
    }
};
