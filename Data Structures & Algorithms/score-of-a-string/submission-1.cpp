class Solution {
public:
    int scoreOfString(string s) {
        if (s.size() < 2) return 0;

        size_t left{0};
        size_t right{1};
        int sum{0};

        while (left != s.size() - 2 && right != s.size() - 1) {
            sum += abs(int(s[left]) - s[right]);
            ++left;
            ++right;
        }

        sum += abs(int(s[left]) - s[right]);

        return sum;
    }
};