#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
public:
	int romanToInt(string s)
	{
		unordered_map<char, int> map
		{
			{'I',1},
			{'V',5},
			{'X',10},
			{'L',50},
			{'C',100},
			{'D',500},
			{'M',1000},
		};

		int output = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (map[s[i]] < map[s[i + 1]])
				output -= map[s[i]];
			else
				output += map[s[i]];
		}

		return output;
		
	}
};

int main()
{
	Solution sol;
	string str;
	int output;

	cin >> str;

	output = sol.romanToInt(str);

	std::cout << output << endl;

}