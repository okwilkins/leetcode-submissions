class Solution {
public:
    bool isAnagram(const string &s, const string &t) {
        if (s.size() != t.size()) {
            return false;
        }

        std::map<char, int> sChars{};
        std::map<char, int> tChars{};

        for (const char c: s) {
            ++sChars[c];
        }

        for (const char c: t) {
            ++tChars[c];
        }

        return sChars == tChars;
    }
};
