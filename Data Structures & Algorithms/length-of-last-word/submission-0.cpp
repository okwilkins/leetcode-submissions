class Solution {
public:
    int lengthOfLastWord(const string &s) {
        int length{0};
        int i{static_cast<int>(s.size()) - 1};

        while (i >= 0 && s[i] == ' ') {
            --i;
        }

        while (i >= 0 && s[i] != ' ') {
            ++length;
            --i;
        }

        return length;
    }
};