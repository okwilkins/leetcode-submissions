class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        size_t n{nums.size()};
        std::vector<int> output(n * 2); 

        for (size_t i{0}; i < n; ++i) {
            output[i] = nums[i];
            output[i + n] = nums[i];
        }

       return output;
    }
};