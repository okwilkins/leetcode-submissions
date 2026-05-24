class Solution {
public:
    bool isValid(const string &s) {
        std::stack<char> bracketStack{}; 
        bool isValidStack{false};

        for (char c: s) {
            bool isStartBracket{c == '(' || c == '[' || c == '{'};
            bool isEndBracket{c == ')' || c == ']' || c == '}'};

            switch (c) {
                case '(':
                    isValidStack = false;
                    break;
                case '[':
                    isValidStack = false;
                    break;
                case '{':
                    isValidStack = false;
                    break;
            }

            if (isStartBracket) {
                bracketStack.push(c);
            } else if (isEndBracket) {
                if (bracketStack.size() == 0) {
                    isValidStack = false;
                    break;
                }
                char topChar{bracketStack.top()};

                if (topChar == '(' && c != ')') {
                    isValidStack = false;
                    break;
                } else if (topChar == '[' && c != ']') {
                    isValidStack = false;
                    break;
                } else if (topChar == '{' && c != '}') {
                    isValidStack = false;
                    break;
                } else {
                    isValidStack = true;
                }

                bracketStack.pop();
            } else {
                continue;
            }
        }

        return isValidStack && bracketStack.empty();
    }
};
