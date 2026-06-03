class Solution {
public:
    int minOperations(const std::vector<std::string> &logs) {
        std::stack<std::string_view> dirStack{};
        std::string_view mainDir{logs[0]};

        for (std::string_view dir : logs) {
            if (dir == "./") { 
                continue;
            } else if (dir != "../") {
                dirStack.push(dir);
                continue;
            }

            if (!dirStack.empty()) {
                dirStack.pop();
            }
        }

        return dirStack.size();
    }
};