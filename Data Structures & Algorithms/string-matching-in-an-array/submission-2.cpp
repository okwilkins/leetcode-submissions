class Solution {
public:
    vector<string> stringMatching(const vector<string> &words) {
        std::unordered_set<string> matching{};
        int i{0};

        for (auto word : words) {
            int j{0};

            for (auto compareWord : words) {
                if (i == j) {
                    ++j;
                    continue;
                }
                if (word.contains(compareWord)) {
                    matching.insert(compareWord);
                }

                ++j;
            }

            ++i;
        }

        return std::vector<string>{matching.begin(), matching.end()};
    }
};