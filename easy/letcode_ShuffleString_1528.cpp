#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {

        string s_result = s;

        for (int i = 0 ; i < indices.size(); i++)
        {
            s_result[indices[i]] = s[i];
        }

        return s_result;

    }
};


int main()
{
    Solution s;
    vector<int> vec;
    string s_in, s_out;
    int num,input;
    cin >> s_in;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> input;
        vec.push_back(input);
    }

    s_out = s.restoreString(s_in, vec);

    cout << s_out << endl;


}