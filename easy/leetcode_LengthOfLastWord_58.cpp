#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution 
{
public:
	int lengthOfLastWord(string s)
	{
		int count = 0;
		for (int i = s.size() - 1; i >= 0; i--)
		{
			if (s[i] != ' ')
				count++;
			if (s[i] == ' ')
			{
				if (count > 0)
					break;
			}
		}

		return count;
			

	}
};

int main()
{
	Solution sol;
	string input;
	int output;
	std::getline(cin, input);

	output = sol.lengthOfLastWord(input);

	cout << output << endl;
}