#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string s = strs[0]; // reference is first string
        for (int i = 1; i< strs.size(); i++)
        {
            int k = 0, j = 0;

            while (k < s.size() || j< strs[i].size())
            {
                if (s[k] == strs[i][j])
                {
                    k++;
                    j++;
                }
                else
                {
                    s = strs[i].substr(0, j);
                    break;
                }
            }

        }
        return s;

    }
};

int main()
{
    Solution sol;
    vector<string> vec;
    int in_nums;
    string in_str, out_str;

    cin >> in_nums;

    for (int i = 0; i < in_nums; i++)
    {
        cin >> in_str;
        vec.push_back(in_str);
    }

    out_str = sol.longestCommonPrefix(vec);

    cout << out_str << endl;
}

