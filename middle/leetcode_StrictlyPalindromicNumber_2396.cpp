#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isStrictlyPalindromic(int n) {

        vector<int> vec;
        for (int i = 2; i < n - 1; i++)
        {
            int temp = n;

            while (temp != 0)
            {
                vec.push_back(temp % i);
                temp /= i;
            }
        }

        for (int j = 0; j < vec.size(); j++)
        {
            if (vec[j] != vec[vec.size() - j - 1])
                return false;
        }

        return true;


    }
};

int main()
{
    Solution sol;
    int input;
    bool output;

    cin >> input;

    output = sol.isStrictlyPalindromic(input);
    cout << boolalpha << output << endl;

}