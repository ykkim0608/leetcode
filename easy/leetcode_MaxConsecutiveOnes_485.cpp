#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int findMaxConsecutiveOnes(vector<int>& nums)
	{
		int count = 0, max_count =0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == 1)
				count++;
			else
				count = 0;

			if (count > max_count)
				max_count = count;

			
		}

		return max_count;
	}
};

int main()
{
	Solution sol;
	vector<int> vec;
	int in_nums, input, output;

	cin >> in_nums;
	for (int i = 0; i < in_nums; i++)
	{
		cin >> input;
		vec.push_back(input);
	}

	output = sol.findMaxConsecutiveOnes(vec);
	cout << output << endl;
}