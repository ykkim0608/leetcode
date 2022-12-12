#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                    pair++;
            }
        }

        return pair;


    }
    int pair = 0;
};


int main()
{
    Solution s;
    int num, input, output;
    std::vector<int> vec_in;
    //std::vector<int> vec_out;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> input;
        vec_in.push_back(input);
    }

    output = s.numIdenticalPairs(vec_in);


    std::cout << output << std::endl;

}

