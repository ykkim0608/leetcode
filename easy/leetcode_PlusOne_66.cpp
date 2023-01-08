#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() - 1;
        while (n >= 0)
        {
            if (digits[n] < 9)
            {
                digits[n] += 1;
                return digits;
            }
            else {
                digits[n] = 0;
                n--;
            }
        }

        //auto iter = digits.begin();
        digits.insert(begin(digits), 1);

        return digits;

    }
};

int main()
{
    Solution sol;
    vector<int> vec_in;
    vector<int> vec_out;
    int in_nums,input;

    cin >> in_nums;

    for (int i = 0; i < in_nums; i++)
    {
        cin >> input;
        vec_in.push_back(input);

    }
    vec_out = sol.plusOne(vec_in);

    for (auto& elem : vec_out)
        cout << elem << ",";
    cout << endl;


    return 0;
}