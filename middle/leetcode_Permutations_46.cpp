#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& v, int i)
    {
        if (i >= nums.size())
        {
            v.push_back(nums);
            return;
        }
        for (int j = i; j < nums.size(); j++)
        {
            swap(nums[i], nums[j]);
            solve(nums, v, i + 1);
            swap(nums[i], nums[j]);
        }

    }
    vector<vector<int>> permute(vector<int>& nums)
    {
        vector<vector<int>>v;
        int i = 0;
        solve(nums, v, i);
        return v;

    }
};

int main()
{
    Solution sol;
    int in_nums, input;
    vector<vector<int>> vec_out;
    vector<int> vec_in;

    cin >> in_nums;
    for (int i = 0; i < in_nums; i++)
    {
        cin >> input; 
        vec_in.push_back(input);

    }
    vec_out = sol.permute(vec_in);

    for (int i = 0; i < vec_out.size() ; i++)
    {
        cout << "[";
        for (int j = 0; j < vec_out[0].size(); j++)
        {
            cout << vec_out[i][j] <<",";
        }
        cout << "]";

    }

    cout << endl;

}