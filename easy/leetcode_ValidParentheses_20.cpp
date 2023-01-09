#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {

        stack <char> stack;

        for (char& c : s)
        {
            if (c == ')' && !stack.empty() && stack.top() == '(')
                stack.pop();
            else if (c == ']' && !stack.empty() && stack.top() == '[') stack.pop();
            else if (c == '}' && !stack.empty() && stack.top() == '{') stack.pop();
            else stack.push(c);
        }
        return stack.empty();

    }
};

int main()
{
    Solution sol;
    string input;
    bool output;
    cin >> input;

    output = sol.isValid(input);

    cout <<boolalpha<< output << endl;
}