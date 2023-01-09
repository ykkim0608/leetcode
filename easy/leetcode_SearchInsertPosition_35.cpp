#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        while (i < nums.size())
        {
            if (target > nums[i])
            {
                i++;
                continue;
            }
            if (target == nums[i] || target < nums[i])
                return i;
                
        }
        return i;
      
    }
};

int main()
{
    Solution sol;
    int in_nums, input, target,output;
    vector<int> vec;

    cin >> in_nums;
    cin >> target;
    for (int i = 0; i < in_nums; i++)
    {
        cin >> input;
        vec.push_back(input);

    }

    output = sol.searchInsert(vec, target);

    cout << boolalpha << output << endl;

    return 0;
}
