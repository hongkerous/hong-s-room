#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string str) {
    stack<char> s;
    for (char c : str) {
        if (c == '(' || c == '[') {
            s.push(c);
        } else if (c == ')' || c == ']') {
            if (s.empty()) return false;
            char top = s.top();
            s.pop();
            if ((c == ')' && top != '(') || (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    string input;
    while (getline(cin, input) && input != ".") {
        cout << (isBalanced(input) ? "yes" : "no") << endl;
    }
    return 0;
}
