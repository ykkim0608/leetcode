#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int min, max, total;
        int m = nums.size();

        sort(nums.begin(), nums.end());


        min = nums[0] * nums[1];
        max = nums[m - 1] * nums[m - 2];

        return max - min;



    }
};

int main()
{
    Solution sol;
    int output, in_nums, input;
    vector<int> in;

    cin >> in_nums;
    for (int i = 0; i < in_nums; i++)
    {
      
        cin >> input;
        in.push_back(input);

    }

    output = sol.maxProductDifference(in);

    cout << output << endl;

    
}