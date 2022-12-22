#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {

        string res;
        int count = 0;
      

        for (auto c : s)
        {
            if (c == ')')
                count--;
            if (count > 0)
            {
                res += c;
            }
            if (c == '(')
                count++;
             }

        return res;

    }
};

int main()
{
    Solution s;
    string parenth_in, parenth_out;

    cin >> parenth_in; 

    parenth_out = s.removeOuterParentheses(parenth_in);

    cout << parenth_out;
}