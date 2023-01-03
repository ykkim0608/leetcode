#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int maxProfit(vector<int>& prices)
	{
		int valley = INT_MAX;
		int ans = 0;
		for (int i = 0; i < prices.size(); i++)
		{
			if (prices[i] < valley)
				valley = prices[i];
			else if (prices[i] - valley > ans)
				ans = prices[i] - valley;
		}
		return ans;
	}

};

int main()
{
	Solution sol;
	int in_nums, prices, output;
	vector<int> vec;

	cin >> in_nums;
	for (int i = 0; i < in_nums; i++)
	{
		cin >> prices;
		vec.push_back(prices);
	}
	output = sol.maxProfit(vec);

	cout << output << endl;
}