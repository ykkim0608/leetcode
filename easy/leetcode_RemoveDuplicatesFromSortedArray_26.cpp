#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int removeDuplicates(vector<int>& nums)
	{
		int j = 0;
	
		for (int i = 0; i < nums.size()-1; i++)
		{
			if (nums[i] != nums[i + 1]) // compare current and next value
			{
				nums[j] = nums[i];
				j++;
			}
		}
		// last nums value 
		nums[j] = nums[nums.size() - 1];
		j++;


		return j;


	}
};

int main()
{
	Solution sol;
	int in_nums, input, output;
	vector<int> vec;

	cin >> in_nums;
	for (int i = 0; i < in_nums; i++)
	{
		cin >> input; 
		vec.push_back(input);
	}
	output = sol.removeDuplicates(vec);
	cout << output << endl;
	return 0;
}