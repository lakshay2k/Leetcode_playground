class Solution {
public:
    int maxArea(vector<int>& height) {
        
        //storing maximum area of max size of container in max variable
        int max = 0;
        int i = 0, j = height.size()-1;
        
        while(i<j)
        {
            //area is calculated by diff b/w indexes * min of first and second pointer
            int area = (j-i)*min(height[i],height[j]);
            if(max<area)
                max=area;
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return max;
    }
};