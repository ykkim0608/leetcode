#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.find(nums[i]) != mp.end())
            {
                if (abs(i - mp[nums[i]]) <= k)
                    return true;
            }
            mp[nums[i]] = i;
        }

        return false;

    }
};

int main()
{
    Solution sol;
    bool output;
    int in_nums, input, k;
    vector<int> vec;

    cin >> in_nums;
    cin >> k;
    for (int i = 0; i < in_nums; i++)
    {
        cin >> input;
        vec.push_back(input);

    }

    output = sol.containsNearbyDuplicate(vec, k);

    cout << boolalpha << output << endl;

    return 0;
}