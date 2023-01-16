#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	int countBattleship(vector < vector<char>>& board)
	{
		int count = 0;
		for (int i = 0; i < board.size(); i++)
		{
			for (int j = 0; j < board[0].size(); j++)
			{
				if ((board[i][j] == 'X')
					&& (i == 0 || (i - 1 >= 0 && board[i - 1][j] != 'X'))  // 'X' is not in the upward cell 
					&& (j == 0 || (j - 1 >= 0 && board[i][j - 1] != 'X')))  // 'X' is not in the left cell 

					 // that means 'X' is starting from here so increase the count
					count++;
			}
		}
		return count;
	}
};

int  main()
{
	Solution sol;
	int in_row,output, in_column;
	char input;
	vector<vector<char>> vec_in(1);
	//vector<vector<int>> vec_in(10);


	cin >> in_row;
	cin >> in_column;
	for (int i = 0; i < in_row; i++)
	{
		for (int j = 0; j < in_column; j++)
		{
			cin >> input;
			vec_in[i].push_back(input);
		}

	}
	output = sol.countBattleship(vec_in);

	cout << output << endl;


}