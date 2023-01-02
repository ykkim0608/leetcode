#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int maximumPopulation(vector<vector<int>>& logs)
	{
		vector<int> po(2051,0);

		#if 0
		for (auto& i : logs)
		{
			po[i[0]]++ ;
			po[i[1]]++;
		}
		#else
		for (int i = 0; i < logs.size(); i++)
		{
			int a = logs[i][0];
			int b = logs[i][1];

			for (int j = a; j < b; j++) po[j]++;
		}
		#endif
		int maxi = 0, year = 0;
		for (int i = 1950; i <= 2050; i++)
		{
			#if 0
			po[i] = po[i] + po[i - 1];
			if (po[i] > maxi)
			{
				maxi = po[i];
				year = i;
			}
			#else
			if (po[i] > maxi)
			{
				maxi = po[i];
				year = i;
			}
			#endif


		}

		return year;
	}
};

int main()
{
	return 0;
}