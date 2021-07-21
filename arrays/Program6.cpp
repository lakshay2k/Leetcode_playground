class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        //creating vector to store the intersecting element
        int i=0,j=0;
        vector<int> v;
        //calculating the sizes of each array                                             
        int n = nums1.size();
        int m = nums2.size();
        //sorting both to compare each element with other
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        while(i<n && j<m)
        {
            //if both elements are equal then that is intersecting element
            if(nums1[i]==nums2[j])
            {
                v.push_back(nums1[i]);
                i++;
                j++;
            }
            //if second array has bigger element, jump to another element in first array
            else if (nums2[j]>nums1[i])
            {
                i++;
            }
            //else jump one element in second array
            else
            {
                j++;
            }
        }
        return v;
    }
};
