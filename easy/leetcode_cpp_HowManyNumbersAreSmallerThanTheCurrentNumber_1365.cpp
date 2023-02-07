#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        int size = nums.size();
        vector<int> ans(size);
        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i == j || nums[i] <= nums[j])
                    continue;
                else
                {
                    count++;

                }


            }
            ans[i] = count;
            count = 0;
        }


        return ans;

    }
};

int main()
{
    Solution sol;
    int in_nums, input;
     vector<int> vec_in;
    vector<int> vec_out;

    cin >> in_nums;
    for (int i = 0; i < in_nums; i++)
    {
        cin >> input;
        vec_in.push_back(input);

    }

    vec_out = sol.smallerNumbersThanCurrent(vec_in);

    auto itr = begin(vec_out);
    cout << "[";

    for (auto& elem : vec_out)
    {
        cout << elem;
        if( itr != end(vec_out)-1)
        cout << ",";

        itr++;
    }
    cout << "]";
    cout << endl;

    return 0;
}