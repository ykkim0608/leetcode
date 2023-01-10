#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result;

        for (auto& elem : nums)
        {
            if (elem < pivot)
            {
                result.push_back(elem);
            }
        }
        for (auto& elem : nums)
        {
            if (elem == pivot)
            {
                result.push_back(elem);
            }
        }

        for (auto& i : nums)
        {
            if (i > pivot)
            {
                result.push_back(i);
            }
        }

        return result;

        

    }
};

int main()
{
    Solution sol;
    int in_nums, input,pivot;
    vector<int> v_in;
    vector<int> v_out;

    cin >> in_nums;
    cin >> pivot;
    for (int i = 0; i < in_nums; i++)
    {
        cin >> input; 
        v_in.push_back(input);
    }

    v_out = sol.pivotArray(v_in, pivot);

    for (auto& elem : v_out)
    {
        cout << elem << ",";
    }
    cout << endl;

}