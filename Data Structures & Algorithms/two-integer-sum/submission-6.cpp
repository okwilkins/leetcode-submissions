class Solution {
public:
    vector<int> twoSum(const vector<int> &nums, int target) {
        std::unordered_map<int, int>searchMap{};

        for (int i{0}; i < nums.size(); ++i) {
            int search{target - nums[i]};

            if (!searchMap.contains(search)) {
                searchMap[nums[i]] = i;
            } else {
                return std::vector<int>{searchMap[search], i};
            }
        }

        return std::vector<int>{};
    }
};
