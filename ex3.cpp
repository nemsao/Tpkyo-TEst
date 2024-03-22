#include <iostream>
#include <stack>
#include <string>

bool isBalancedString(const std::string& s) {
    std::stack<char> brackets;
    std::string openingBrackets = "{[(";
    std::string closingBrackets = "}])";
    std::string bracketPairs = "{}[]()";

    for (char c : s) {
        if (openingBrackets.find(c) != std::string::npos) {
            brackets.push(c);
        } else if (closingBrackets.find(c) != std::string::npos) {
            if (brackets.empty()) {
                return false;
            }
            char top = brackets.top();
            brackets.pop();
            if (bracketPairs.find(top) != bracketPairs.find(c) - 1) {
                return false;
            }
        }
    }

    return brackets.empty();
}

int main() {
    int N;
    std::cin >> N;
    std::cin.ignore(); // Ignore the newline character after N

    for (int i = 0; i < N; i++) {
        std::string test_case;
        std::getline(std::cin, test_case);
        bool is_balanced = isBalancedString(test_case);
        std::cout << (is_balanced ? "true" : "false") << std::endl;
    }

    return 0;
}