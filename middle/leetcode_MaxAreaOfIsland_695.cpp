#include <iostream>
#include <vector>

using namespace std;
class Solution {
private:
    vector<vector<bool>> vis;
    int maxarea = 0, n, m;
    vector<pair<int, int>> movements{ {0,1},{0,-1},{1,0},{-1,0} };
    auto isValid(int i, int j) {
        return i >= 0 && i < n&& j >= 0 && j < m;
    }
    void dfs(vector<vector<int>>& grid, int i, int j, int& area) {
        vis[i][j] = true;
        for (auto [x, y] : movements) {
            x += i, y += j;
            if (isValid(x, y) && grid[x][y] && !vis[x][y]) {
                area += 1;
                dfs(grid, x, y, area);
            }
        }
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n = grid.size(), m = grid[0].size();
        vis.resize(n, vector<bool>(m, false));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] && !vis[i][j]) {
                    int area = 1;
                    dfs(grid, i, j, area);
                    maxarea = max(area, maxarea);
                }
            }
        }
        return maxarea;
    }
};

int main()
{
    return 0;
}