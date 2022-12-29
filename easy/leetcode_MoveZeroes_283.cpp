#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	void moveZeroes(vector<int>& nums)
	{

		int val = 0;

		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] != 0)
				nums[val++] = nums[i];

		}
		for (int i = val; i < nums.size(); i++)
			nums[i] = 0;
		

		for (auto elem : nums)
		{
			cout << elem <<", ";
		}
		cout << endl;

	}
};

int main()
{
	int in_nums, input, output;
	Solution sol;
	vector<int> vec;

	cin >> in_nums;

	for (int i = 0; i < in_nums; i++)
	{
		cin >> input;
		vec.push_back(input);
	}

	sol.moveZeroes(vec);

	
	return 0;
}