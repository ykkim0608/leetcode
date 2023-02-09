#include <iostream>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        int count = 0,sum =0;

        for (int i = 0; i < jewels.size(); i++)
        {
            for (int j = 0; j < stones.size(); j++)
            {
                if (jewels[i] == stones[j])
                {
                    count++;
                }
            }
            sum += count;
            count = 0;


        }

        return sum;

    }
};

int main()
{
    Solution sol;

    string jewels,stones;
    int output;
    cin >> jewels;
    cin >> stones;

    output = sol.numJewelsInStones(jewels, stones);

    std::cout << output << std::endl;


    
    return 0;
}
