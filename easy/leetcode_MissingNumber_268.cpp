#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            if (i != nums[i])
                return i;
         

        }

        return nums.size();

    }
};


int main()
{
    Solution sol;
    int in_nums, input,output;
    cin >> in_nums;
    vector<int> vec;

    for (int i = 0; i < in_nums; i++)
    {
        cin >> input;
        vec.push_back(input);

       
        
    }
    output = sol.missingNumber(vec);

    cout << output << endl;
    
    return 0; 
}