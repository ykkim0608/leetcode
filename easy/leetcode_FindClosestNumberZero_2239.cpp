#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
      
        int ans = INT_MAX;
        for (int elem : nums)
        {
            if (abs(elem) < abs(ans))
                ans = elem;
            else if (abs(elem) == abs(ans))
                ans = max(ans, elem);
        }

        return ans;


    }
};

int main()
{
    Solution sol;
    int in_nums, input,output;
    vector<int> vec;
   

    cin >> in_nums;
    for (int i = 0; i < in_nums; i++)
    {
        cin >> input;
        vec.push_back(input);
    }
    output = sol.findClosestNumber(vec);

        cout << output << endl;
    return 0;
    

}