#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
	bool containsDuplicate(vector<int>& nums)
	{

		map<int, int> m;
		bool output = false;

		for (int i = 0; i < nums.size(); i++)
		{
			m[nums[i]]++;
		}
		map<int, int>::iterator it;
		

		for (it = m.begin(); it != m.end(); ++it)
		{
			if (it->second >= 2)
			{
				output = true;
				break;
			}
		}
		return output;
	}

};

int main()
{
	Solution sol;
	int in_nums, input;
	bool output1;
	vector<int> vec;

	cin >> in_nums;
	for (int i = 0; i < in_nums; i++)
	{
		cin >> input;
		vec.push_back(input);
		
	}

	output1 = sol.containsDuplicate(vec);

	cout << boolalpha << output1 << endl;

	return 0;
}