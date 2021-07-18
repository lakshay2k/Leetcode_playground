// Question link:
// https://leetcode.com/problems/pascals-triangle-ii/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        //creating a vector to store the pascal triangle pattern
        vector<int> pascal(rowIndex+1,1);
        
        long int res=1;
        int n=rowIndex;
        
        //the formula that can be used to get the nth row of pascals triangle is that
        // n-1*C*c-1  -> small c goes to 0(keeps on decreasing) 
        for(int i=1;i<rowIndex;i++)
        {
            /*
            For ex: 3C1 = 3/1, 3C2 = 3*2/1*2, 3C3 = 3*2*1/1*2*3
            */
            res = res*(n--);   // uppper side of (r-1)*C*(c-1) decreases
            res = res/(i);     // lower side of --- increases
            pascal[i]=res;
        }
        return pascal;
    }
};
