class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int flowersPlaced{};

        for (int centreIdx{}; centreIdx < flowerbed.size(); ++centreIdx) {
            bool left{};
            bool centre{};
            bool right{};

            if (centreIdx - 1 < 0) {
                left = false;
            } else {
                left = static_cast<bool>(flowerbed[centreIdx - 1]);
            }

            if (centreIdx + 1 >= flowerbed.size()) {
                right = false;
            } else {
                right = static_cast<bool>(flowerbed[centreIdx + 1]);
            } 

            centre = static_cast<bool>(flowerbed[centreIdx]);

            if (!left && !centre && !right) {
                flowerbed[centreIdx] = 1;
                ++flowersPlaced;
            }
        }

        return flowersPlaced >= n;
    }
};