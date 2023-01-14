#include <iostream>
#include <queue>

using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {

        queue<int> que;
        for (int i = 1; i <= n; i++)
        {
            que.push(i);
        }

        while (que.size()!=1)
        {
            for (int i = 0; i < k-1; i++)
            {
                int r = que.front();
                que.push(r);
                que.pop();

              
            }
            que.pop();  // delete last after increment by number
        }

        int ans = que.front();

        return ans;




    }
};

int main()
{
    Solution sol;

    int n, k, output;

    cin >> n >> k;
    output = sol.findTheWinner(n, k);

    cout << output << endl;

}