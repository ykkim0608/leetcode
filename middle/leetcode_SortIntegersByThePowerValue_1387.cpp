#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

class Solution {
public:
    int getKth(int lo, int hi, int k) {

        multimap<int,int> mp;
        int count{ 0 }, power_value;

        for (int i = lo; i <= hi; i++)
        {
            power_value = i;
            while (power_value != 1)
            {
                if (power_value % 2 == 0)
                {
                    power_value = power_value / 2;
                }
                else
                {
                    power_value = 3 * power_value + 1;
                }

                count++;
            }
            mp.insert(make_pair(count, i));
            count = 0;
        }
        k = k - 1;
        auto itr = mp.begin();

        for (int i = 1; i <=k; i++)
            itr++;


        return itr->second;

    }
};

int main()
{
    Solution sol;

    int in_lo, in_hi, k,output;

    cin >> in_lo >> in_hi >> k;

    output = sol.getKth(in_lo, in_hi, k);

    std::cout << output << std::endl;
}