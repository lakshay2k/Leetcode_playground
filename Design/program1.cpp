class Solution {
public:
    vector<int> nums;
    Solution(vector<int>& nums) {
        this->nums = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return nums;
        
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        int random_number;
        vector<int> result(nums);
        for(int i=1;i<result.size();i++)
        {
            random_number = get_rand(i);
            swap(result[i],result[random_number]);
        }
        return result;
    }
    int get_rand(int n)
    {
        return rand()%(n+1);
    }
};
