class Solution {
public:
    int calPoints(const vector<string> &operations) {
        std::stack<int> points{};

        for (std::string_view operation : operations) {
            if (operation == "+") {
                auto second{points.top()};
                points.pop();
                auto first{points.top()};

                points.push(second);
                points.push(first + second);
            } else if (operation == "D") {
                points.push(points.top() * 2);
            } else if (operation == "C") {
                points.pop();
            } else {
                points.push(std::stoi(std::string(operation)));
            }
        }

        int sum{0};

        while (!points.empty()) {
            sum += points.top();
            points.pop();
        } 

        return sum;
    }
};