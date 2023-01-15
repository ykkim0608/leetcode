#include <Iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern)
    {
        vector<string> ans;
        for (int i = 0; i < words.size(); i++)
        {
            int flag = 1;
            string s = words[i];
            if (s.length() != pattern.length())
                continue;
            unordered_map<char, char> m1;
            unordered_map<char, char> m2;
            for (int j = 0; j < s.size(); j++)
            {
                if ((m1.find(pattern[j]) == m1.end()) && (m2.find(s[j]) == m2.end()))
                {
                    m1[pattern[j]] = s[j];
                    m2[s[j]] = pattern[j];
                }
                else
                {
                    if (m1[pattern[j]] != s[j] || m2[s[j] != pattern[j]])
                    {
                        flag = 0;
                        break;
                    }

                }
                
            }
            if (flag == 1)
                ans.push_back(s);
        }

        return ans;
       

    }
};

int main()
{
    Solution sol;
    int in_nums;
    vector<string> str_in;
    vector<string> str_out;
    string pattern,words ;

    cin >> in_nums >> pattern;

    for (int i = 0; i < in_nums; i++)
    {
        cin >> words;

        str_in.push_back(words);

    }

    str_out = sol.findAndReplacePattern(str_in, pattern);

    for (auto& elem : str_out)
        cout << elem << ",";
    cout << endl;



    return 0;
}