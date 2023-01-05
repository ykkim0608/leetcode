#include <iostream>
#include <vector>
#include<map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int, int> m;
        vector<int> v;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int diff = target - nums[i];
            if (m.find(diff) != m.end())
            {
                auto p = m.find(diff);
                v.push_back(p->second);
                v.push_back(i);
            }
            m.insert(make_pair(nums[i], i));
        }

        return v;

    }

};

int main()
{

    Solution sol;
    int in_nums, input,target_val;
    vector<int> vec;
    vector<int> output;

    cin >> in_nums;
    cin >> target_val;
    for (int i = 0; i < in_nums; i++)
    {
        cin >> input;
        vec.push_back(input);
    }
    output = sol.twoSum(vec, target_val);
    for(auto& elem: output)
    cout << elem <<",";
    cout << endl;
    return 0;
}