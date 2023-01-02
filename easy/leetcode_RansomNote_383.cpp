#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
	bool canConstruct(string ransomNote, string magazine)
	{
		int count = 0;
		sort(ransomNote.begin(), ransomNote.end());
		sort(magazine.begin(), magazine.end());

		for (int i = 0; i < ransomNote.size(); i++)
		{
			for (int j = 0; j < magazine.size(); j++)
			{
				if (ransomNote[i] == magazine[j])
					count++;
				break;
			}
		}
		if (ransomNote.size() == count)
			return true;
		else
			return false;
	}
};

int main()
{
	Solution sol;
	string ransomNote, Magazine;
	bool output;

	cin >> ransomNote;
	cin >> Magazine;

	output = sol.canConstruct(ransomNote, Magazine);

	cout <<boolalpha << output << endl;


}