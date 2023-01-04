#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+4);

        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 3;

        for (int i = 4; i <= n; i++)
            dp[i] = dp[i - 1] + dp[i - 2];

        return dp[n];

        

       

    }
};

int main()
{
    Solution sol;
    int input, output;
    cin >> input;
    output = sol.climbStairs(input);

    cout << output << endl;

    return 0;
}