#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minimumSum(int num) {

        int digit = num;
        vector<int> v;

        while (digit != 0)
        {
            int temp = digit % 10;
            v.push_back(temp);
            digit = digit / 10;
        }

        sort(begin(v), end(v));

        int num1 = v[0] * 10 + v[2];
        int num2 = v[1] * 10 + v[3];

        int sum = num1 + num2;
        return sum;

    }
};

int main()
{
    Solution sol;
    int input,output;

    cin >> input;

   output = sol.minimumSum(input);

   cout << output << endl;
}