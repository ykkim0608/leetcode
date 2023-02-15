#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int total_sum = 0;

        for (int i = 0; i < grid.size(); i++)
        {
            sort(grid[i].begin(), grid[i].end());
        }


        for (int i = 0; i < grid[0].size(); i++)
        {
            int maxi = INT_MIN;
            for (int j = 0; j < grid.size(); j++)
            {
                maxi = max(maxi, grid[j][i]);
            }
            total_sum += maxi;
        }


        return total_sum;

    }
};

int main()
{
    return 0;
}

