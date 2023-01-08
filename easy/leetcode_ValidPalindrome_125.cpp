#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

class Solution {
public:
	
	
	bool isPalindrome(string s)
	{
		string s1,s2;

		for (auto& c : s)
		{
			if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z'))
				s1 += c;
			else if (c >= 'A' && c <= 'Z')
			{
				s1 += c + 32;
			}
				
		}
		s2 = s1;
		reverse(s1.begin(), s1.end());

		if (s1 == s2)
			return true;
		else
			return false;

	}
	
		

};

int main()
{
	Solution sol;
	string input;
	bool output;
	getline(cin, input);

	output = sol.isPalindrome(input);
	cout << boolalpha << output << endl;

}
