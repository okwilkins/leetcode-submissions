class Solution {
public:
    int maxDifference(const string &s) {
        std::unordered_map<char, int> count{};

        for (const char c : s) {
            ++count[c];
        }

        int maxOdd = 0;
        int minEven = s.size() + 1;;

        for (auto const& [ch, freq] : count) {
            if (freq % 2 == 0) {
                if (freq < minEven) minEven = freq;
            } else {
                if (freq > maxOdd) maxOdd = freq;
            }
        }

        return maxOdd - minEven;
    }
};