#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
                return i;
        }

        return - 1;


    }
};

int main()
{
    Solution sol;
    vector<int> nums;
    int in_nums, input, output,target;

    cin >> in_nums;
    cin >> target;
    for (int i = 0; i < in_nums; i++)
    {
        cin >> input;
        nums.push_back(input);
    }

    output = sol.search(nums, target);
    cout << output << endl;

}