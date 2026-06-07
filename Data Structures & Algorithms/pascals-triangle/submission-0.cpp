class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> pascalLines{};
        pascalLines.reserve(numRows);

        for (int i{0}; i < numRows; ++i) {
            if (i == 0) {
                pascalLines.push_back(std::vector<int>{1});
                continue;
            } else if (i == 1) {
                pascalLines.push_back(std::vector<int>{1, 1});
                continue;
            }

            std::vector<int> line{};

            for (int j{0}; j <= i; ++j) {
                if (j == 0 || j == i) {
                    line.push_back(1);
                } else {
                    line.push_back(pascalLines[i - 1][j - 1] + pascalLines[i - 1][j]);
                }
            }

            pascalLines.push_back(line); 
        }

        return pascalLines;
    }
};