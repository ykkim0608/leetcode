#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {

        map<char, int> map1, map2;
        for (int i = 0; i < s.size(); ++i) {
            if (map1[s[i]] != map2[t[i]]) return false;
            map1[s[i]] = i + 1;
            map2[t[i]] = i + 1;
        }
        return true;


    }
};


int main()
{
    Solution sol;
    bool output;
    string s, v;

    cin >> s >> v;

    output = sol.isIsomorphic(s, v);

    cout << boolalpha << output << endl;
    
    return 0;
}