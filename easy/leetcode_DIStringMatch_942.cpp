#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> res;
        int i_value = 0;
        int d_value = s.length();

        for (int i = 0; i <= s.length(); i++)
        {
            if (s[i] == 'I')
            {
                res.push_back(i_value);
                i_value++;
            }
            else if( s[i] == 'D')
            {
                res.push_back(d_value);
                d_value--;
            }
            else if (i == s.length())
            {
                res.push_back(d_value);

                   
            }
            


        }

        return res;

    }
};


int main()
{
    Solution s;
    string input;
    vector<int> vec;

    cin >> input;
    vec = s.diStringMatch(input);

    cout << "Output: [";

    for (auto elem : vec)
        cout << elem << ",";
    cout << "]";



    return 0;
}