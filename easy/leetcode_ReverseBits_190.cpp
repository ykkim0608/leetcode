#include <iostream>

using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        uint32_t count = 32, result = 0;

        while (count)
        {
            result = result + (n & 1);
            count--;
            n = n >> 1;
            if (count)
                result = result << 1;
        }

        return result;
       
   }

};

int main()
{
    Solution sol;
    uint32_t input,output;

    cin >> input;

    output = sol.reverseBits(input);

    cout << output << endl;
}

