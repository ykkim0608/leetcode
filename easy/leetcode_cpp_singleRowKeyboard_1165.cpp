#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int calculateTime(string keyboard, string word) {

        int index = 0, time, total = 0, sum=0;

        for (int i = 0; i < word.size(); i++)
        {
            for (int j = 0; j < keyboard.size(); j++)
            {
                if (word[i] == keyboard[j])
                {
                    index = abs(j - index);
                    total += index;
                    index = j;
                }


            }
            sum += total;
            total = 0;

        }

        return sum;

    }
};

int main()
{
    Solution sol;

    string keyboard, word;
    int output;
    cin >> keyboard;
    cin >> word;

    output = sol.calculateTime(keyboard, word);

    std::cout << output << std::endl;
}