#include <iostream>

using namespace std;

class Solution
{
public:
	bool isPowerOfThree(int n)
	{
		int i = 0, value;
		while (pow(3, i) <= n)
		{
			
			value = pow(3, i);
			if (n == value)
				return true;
			i++;
		}
		return false;
	}
};

int main()
{
	Solution sol;
	int input;
	bool output;
	cin >> input;

	output = sol.isPowerOfThree(input);
	cout << boolalpha << output << endl;

}