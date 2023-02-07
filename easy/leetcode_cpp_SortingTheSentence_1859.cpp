#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
	string sortSentence(string s)
	{
        vector<string>arr(10);

        string temp;
        int index = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                arr[s[i] - '1'] = temp + " ";
                temp = "";
                i++;
            }
            else
            {
                temp += s[i];
            }
        }

        string ans = "";
        for (auto& i : arr)
        {
            ans += i;
        }
        ans.pop_back();

        return ans;

	}
};

int main()
{
    return 0;
}