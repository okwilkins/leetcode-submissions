class Solution {
public:
    vector<int> twoSum(const vector<int> &nums, int target) {
        for (int i{0}; i < nums.size(); ++i) {
            int search{target - nums[i]};

            for (int j{i + 1}; j < nums.size(); ++j) {
                if (nums[j] == search) return std::vector<int>{i, j};
            }
        }

        return std::vector<int>{};
    }
};
