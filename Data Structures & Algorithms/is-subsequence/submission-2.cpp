class Solution {
public:
    bool isSubsequence(const string &s, const string &t) {
        if (s.size() > t.size()) return false;
        size_t tIdx{0};

        for (size_t sIdx{0}; sIdx < s.size(); ++sIdx) {

            for (; tIdx < t.size(); ++tIdx) {
                if (s[sIdx] == t[tIdx]) break;
            }

            if (tIdx == t.size()) {
                return false;
            } else {
                ++tIdx;
            }
        }

        return true;
    }
};