class Solution {
public:
    int findMaxConsecutiveOnes(const vector<int> &nums) {
        int topScore{0}; 
        int currScore{0}; 
        bool streakActive{false};

        for (int num : nums) {
            if (num == 1) {
                streakActive = true;
                ++currScore;
            } else if (num == 0 && streakActive) {
                streakActive = false;
                topScore = max(currScore, topScore);
                currScore = 0;
            }
        }

        return max(currScore, topScore);
    }
};