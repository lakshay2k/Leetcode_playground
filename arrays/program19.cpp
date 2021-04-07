class Solution {
public:

    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        
        //using hashmap to store the sum and frequency of C and D vectors
        unordered_map<int, int> sumcount;
        int intermediate_sum = 0,count = 0;
        int i,j;
        
        for(i=0;i<A.size();i++)
        {
            for(j=0;j<B.size();j++)
            {
                intermediate_sum = A[i] + B[j];
                sumcount[intermediate_sum] = sumcount[intermediate_sum] + 1;
            }
        }

        
        //comparing the sum calculated is present in C and D or not
        //then increasing the count by its frequency
        for(i=0;i<C.size();i++)
        {
            for(j=0;j<D.size();j++)
            {
                intermediate_sum = C[i] + D[j];
                if(sumcount.find(-intermediate_sum) != sumcount.end())
                {
                    count = count + sumcount[-intermediate_sum];
                }
            }
        }

        return count;
    }
};