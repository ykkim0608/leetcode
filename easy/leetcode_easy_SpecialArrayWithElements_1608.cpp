#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int specialArray(vector<int>& nums) {
        int count = 0;

        //sort(nums.begin(),nums.end());

        for (int i = 1; i <= nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i <= nums[j])
                    count++;
            }
            if (i == count)
                return count;

            count = 0;
        }

        return -1;
	}
};

int main()
{
    Solution sol;
    int in_nums, input, output;
    vector<int> nums;

    cin >> in_nums;
    for (int i = 0; i < in_nums; i++)
    {
        cin >> input;
        nums.push_back(input);
    }
    output = sol.specialArray(nums);

    cout << output << endl;
}