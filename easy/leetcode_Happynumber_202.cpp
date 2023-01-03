#include <iostream>

using namespace std;

class Solution
{
public:
	bool isHappy(int n)
	{
		if (n == 1)
			return true;
		if (n == 4)
			return false;
	
		int arr[1000];
		int i = 0, sum=0, multi;
		while (n >= 1)
		{
			arr[i]= n % 10;
			n = n / 10;
			
			multi = arr[i] * arr[i];
			sum += multi;
			i++;
			
		}

		return isHappy(sum);
	}
};

int main()
{
	Solution sol;
	int input;
	bool output; 
	cin >> input;
	output = sol.isHappy(input);

	cout << boolalpha << output << endl;

	return 0;
}