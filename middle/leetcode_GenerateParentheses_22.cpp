#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> ans;

        dfs(ans, "", n, 0);
        return ans;
        

        

    }
    void dfs(vector<string>& v, string str, int n, int m)
    {
        if (n == 0 && m == 0)
        {
            v.push_back(str);
            return;
        }
        if (m > 0) { dfs(v, str + ")", n, m - 1); }
        if (n > 0) { dfs(v, str + "(", n - 1, m + 1); }
    }
};