class Solution {
public:
    vector<int> twoSum(const vector<int> &nums, int target) {
       std::unordered_map<int, std::size_t> numElements{}; 
       numElements.reserve(nums.size());

        for (std::size_t i = 0; i < nums.size(); ++i) {
            numElements[nums[i]] = i;
        }

        for (std::size_t i = 0; i < nums.size() - 1; ++i) {
            int numCheck{target - nums[i]};
        
            if (numElements.contains(numCheck)) {
                if (numElements.at(numCheck) != i) {
                    return std::vector{static_cast<int>(i), static_cast<int>(numElements.at(numCheck))};
                } 
            }
        }
    }
};
