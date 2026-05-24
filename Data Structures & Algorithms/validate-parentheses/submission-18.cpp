class Solution {
public:
    bool isValid(const string &s) {
        std::stack<char> bracketStack{};

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                bracketStack.push(c);
            }
            else if (c == ')' || c == ']' || c == '}') {
                if (bracketStack.empty()) return false;

                char top = bracketStack.top();
                if ((top == '(' && c != ')') ||
                    (top == '[' && c != ']') ||
                    (top == '{' && c != '}')) {
                    return false;
                }
                bracketStack.pop();
            }
        }

        return bracketStack.empty();
    }
};