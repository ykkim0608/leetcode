#include <iostream>

using namespace std;

class Solution {
public:
    int findComplement(int num) {

        int com = 0x01;

        while (com < num)
        {
            com <<= 1;
            com = com | 0x01;
        }

        com = com ^ num;

        return com;

    }
};

int main()
{
    Solution s;
    int input,output;
    cin >> input;
    output= s.findComplement(input);
    cout << output << endl;

    return 0;
}