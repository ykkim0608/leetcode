#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        if (s == t)
            return true;
        else
            return false;

    }
};

int main()
{
    string s, t; 
    Solution str;
    bool output;

    cin >> s;
    cin >> t;
    output = str.isAnagram(s,t);

    cout << boolalpha << output;

    return 0;
}