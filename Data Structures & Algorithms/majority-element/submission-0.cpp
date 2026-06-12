class Solution {
public:
    int majorityElement(const vector<int> &nums) {
        std::unordered_map<int, int> count{};
        int majorityCount{static_cast<int>(nums.size()) / 2};

        for (auto num : nums) {
            ++count[num];

            if (count[num] > majorityCount) {
                return num;
            }
        }

        return 0;
    }
};