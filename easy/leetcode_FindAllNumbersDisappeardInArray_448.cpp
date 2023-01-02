#include <iostream>
#include <vector>

using namespace std;

class Solution
{

public:
	vector<int> findDisappearedNumbers(vector<int>& nums)
	{
		int n = nums.size();
		
		vector<int> out;
		vector<int> tmp(n + 1, 0);
		
		#if 1
		for (auto& elem : nums)
		{
			tmp[elem]++;
		}
		#else
		for (int i = 1; i <= n; i++)
		{
			tmp[i]++;
		}
		#endif

		for (int i = 1; i <= n; i++)
			if (!tmp[i])
				out.push_back(i);
		
	

		return out;
	}
};

int main()
{
	Solution sol;
	int in_nums, input;
	vector<int> vec_in;
	vector<int> vec_out;

	cin >> in_nums;

	for (int i = 0; i < in_nums; i++)
	{
		cin >> input;
		vec_in.push_back(input);
	}

	vec_out = sol.findDisappearedNumbers(vec_in);

	cout << "[";
	for (auto& elem : vec_out)
	{
		cout << elem << ",";
	}
	cout << "]" << endl;
}