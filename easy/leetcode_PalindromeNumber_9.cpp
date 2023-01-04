#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        long long int reverse = 0, divide =0;

        for (int i = x; i > 0; i = i / 10)
        {
            divide = i % 10;
            reverse = reverse * 10 + divide;
        }

        if (reverse == x)
            return true;
        else
            return false;
        

    }
};

int main()
{
    Solution sol;
    int input;
    bool output;
    cin >> input;

    output = sol.isPalindrome(input);

    cout << boolalpha << output << endl;



    return 0;
}