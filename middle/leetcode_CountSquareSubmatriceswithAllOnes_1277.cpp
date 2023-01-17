#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int total_square = 0,ans =0,i, j;

        for (i = 1; i<m ; i++)
        {
           
            for (j = 1; j < n; j++)
            {
                if (matrix[i][j] == 1)
                    matrix[i][j] += min(matrix[i - 1][j - 1], min(matrix[i - 1][j], matrix[i][j - 1]));
                
            }
       
          
        }
        for (int k = 0; k < m; k++)
        {
            for (int p = 0; p < n; p++)
            {
                ans += matrix[k][p];
            }
        }

        return ans;

    }
};

int main()
{

}