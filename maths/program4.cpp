class Solution {
public:
    int romanToInt(string s) {
        
        //declaring variables for result, num and len for length of string
        int result=0,num;
        int len = s.size();
        
        //storing all the roman pairs in map using insert function
        map<char,int> roman;
        
        roman.insert({'I',1});
        roman.insert({'V',5});
        roman.insert({'X',10});
        roman.insert({'L',50});
        roman.insert({'C',100});
        roman.insert({'D',500});
        roman.insert({'M',1000});
        
        /*we use analogy that : 
        1. number before greater no. is smaller than greater number then we subtract that from greater no.
        2. while if number is smaller after the greatest number then we add the smallest no. to greatest no.
        */

        for(int i = 0;i < len ;)
        {
            //1.
            if(i == len-1 || roman[s[i]] >= roman[s[i+1]])
            {
                num = roman[s[i]];
                i++;
            }
            //2.
            else
            {
                num = roman[s[i+1]] - roman[s[i]];
                i=i+2;
            }
            result = result + num;
        }
        
        //returing result;
        return result;
    }
};