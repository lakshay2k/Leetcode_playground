class Solution {
public:
    vector<string> fizzBuzz(int n) {

        vector<string> res;
        
//remeber to check for combined condition first and then the individual conditions
        for(int i=1;i<=n;i++)
        {
            if(i%3 == 0 && i%5 == 0)
                res.push_back("FizzBuzz");
            else if(i%5 == 0)
                res.push_back("Buzz");
            else if(i%3 == 0)
                res.push_back("Fizz");
            else
                res.push_back(to_string(i));
        }

/return resultant vector
        return res;
    }
};
