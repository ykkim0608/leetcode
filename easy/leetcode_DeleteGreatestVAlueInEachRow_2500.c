#include <stdio.h>


int deleteGreatestValue(int** grid, int gridSize, int* gridColSize) {
    int ans =0;
    int* countMap = malloc(sizeof(int)* 101);

    for (int r = 0; r < gridSize; r++)
    {
        int max = 0;
        for (int i = 0; i <= 100; i++)
        {
            countMap[i] = 0;
        }



        for (int c = 0; c < *gridColSize; c++)
        {
            if (grid[r][c] > max)
                max = grid[r][c];
            countMap[grid[r][c]]++;
        }

        int idx = 0;
        for (int i = 1; i <= max; i++) {
            for (int j = 0; j < countMap[i]; j++) {
                grid[r][idx++] = i;
            }
        }
    }

    free(countMap);
    countMap = NULL;

    for (int c = 0; c < *gridColSize; c++) {
        int max = 0;
        for (int r = 0; r < gridSize; r++) {
            if (grid[r][c] > max) max = grid[r][c];
        }
        ans += max;
    }

    return ans;



}        


int main()
{
    return 0;
}

