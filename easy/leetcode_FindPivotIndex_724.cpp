#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int pivotIndex(vector<int>& nums)
	{
        int rsum = 0, lsum = 0;
        for (int i : nums)
            rsum += i;

        for (int i = 0; i < nums.size(); i++)
        {
			rsum -= nums[i];
			if (rsum == lsum)
                return i;

            lsum += nums[i];
        }
		return -1;
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
	output = sol.pivotIndex(vec);

	cout << output << endl;
}