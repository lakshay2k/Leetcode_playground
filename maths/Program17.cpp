// Question link: https://practice.geeksforgeeks.org/problems/print-the-kth-digit3520/1#


class Solution{
public:
    
    int kthDigit(int A,int B,int K){
        // declaring long int to store the large number after power operation
        long long int num = pow(A,B);
        //cout<<num<<endl;
        int rem=0;
        while(K!=0 && num!=0)
        {
            rem=num%10;
            num=num/10;
            K--;
          //  cout<<rem<<" "<<num<<endl;
        }
        return rem;
    }
};
