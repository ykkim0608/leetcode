#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        while (i < s.size() && j < t.size())
        {
            if (s[i] == t[j])
            {
                i++; j++;
            }
            else
            {
                j++;
            }
        }

        if (s.size() - i == 0)
            return true;
        else
            return false;

    }
};

int main()
{
    Solution sol;
    string in_s, in_t;
    bool output;

    cin >> in_s;
    cin >> in_t;

    output = sol.isSubsequence(in_s, in_t);

    cout << boolalpha << output << endl;
}