#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, max_val = 0, max_num = 0;

        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                    count++;
            }

            if (max_val < count)
            {
                max_val = count;
                max_num = nums[i];
            }
            i = i + count - 1;
            count = 0;

        }

        return max_num;

    }
};

int main()
{
    int input, output, input_num;
    Solution s;
    vector<int> vec;

    cin >> input_num;
    for (int i = 0; i < input_num; i++)
    {
        cin >> input;
        vec.push_back(input);
    }
   output=  s.majorityElement(vec);

   cout << output << endl;
}