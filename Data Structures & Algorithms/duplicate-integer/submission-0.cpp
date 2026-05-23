class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> numSet{}; 

        for (auto n: nums) {
            if (!numSet.contains(n)) {
                numSet.insert(n);
            } else {
                return true;
            }
        }

        return false;
    }
};