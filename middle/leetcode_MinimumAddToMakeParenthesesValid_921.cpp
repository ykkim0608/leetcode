#include <iostream>

using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        int left = 0, right = 0;
        for (auto& c : s)
        {
            if (c == '(')
                left++;
            else
            {
                if (left > 0)
                    left--;
                else
                    right++;
            }
        }
        return left + right;
    }
};

int main()
{
    Solution sol;
    int output;
    string str;
    cin >> str;
    output = sol.minAddToMakeValid(str);
    cout << output << endl;
}