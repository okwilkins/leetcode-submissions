class Solution {
public:
    int search(const vector<int>& nums, int target) {
        int startIdx{0};
        int endIdx{static_cast<int>(nums.size()) - 1};

        while (startIdx <= endIdx) {
            int midpoint{startIdx + (endIdx - startIdx)/2};

            if (target == nums[midpoint]) {
                return midpoint;
            } else if (target > nums[midpoint]) {
                startIdx = midpoint + 1;
            } else {
                endIdx = midpoint - 1;
            } 

            midpoint = startIdx + (endIdx - startIdx) / 2;
        }

        return -1;
    }
};
