class Solution {
public:
    bool isHappy(int n) {
        
        //declaring sum to add square of digits
        int t1,sum=0;
        
        //using set to store all the intermediate sum and if we encounter any number again then we 
        //can say that it forms a infinite loop and return false
        set<int> myset;
        
        //approach is to pass 1 in while and check conditions inside and return true and false accordingly
        while(1)
        {

            //everytime we have to make sum 0 to count for next number that comes
            sum=0;
            
            //we take modulous to extract last digit of num and we keep doing till number of digits 
            while(n)
            {
                // 132 % 10 = 2, 132/10=13, 13%10=3, 13/10=1 , 1%10 = 1;
            t1 = n%10;
            sum = sum + t1*t1;
            n = n/10;

            }
            
         //now for every intermediate sum we check is it 1 (return true) or if sum is already present in set(return false)
            if(sum == 1)
                return true;
            else if(myset.find(sum) != myset.end())
                return false;
            
            //inserting value in set and changing number to sum of newly sqaure of digits
            myset.insert(sum);
            n=sum;
        }

        return false;
    }
};
