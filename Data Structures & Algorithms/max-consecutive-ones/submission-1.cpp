class Solution {
public:
    int findMaxConsecutiveOnes(const vector<int> &nums) {
        int count{0}; 
        int result{0}; 

        for (int num : nums) {
            if (num == 1) {
                ++count;
            } else {
                count = 0;
            }

            result = max(result, count);
        }

        return result;
    }
};