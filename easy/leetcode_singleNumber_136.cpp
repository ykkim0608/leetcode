#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count = 0, i=0;

        sort(nums.begin(), nums.end());

        for (i =0; i<nums.size(); i++)
        {
            for (int j = i ; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                    count++;
            }
            if (count == 1)
                return nums[i];
            else {
                i += count - 1;
                count = 0;
            }
        }

        return 0;

    }
};

int main()
{
    Solution s;
    int in_nums, input, output;
    vector<int> vec;

    cin >> in_nums;

    for (int i = 0; i < in_nums; i++)
    {
        cin >> input;
        vec.push_back(input);
    }

    output = s.singleNumber(vec);
    cout << output << endl;

    
    return 0;
}