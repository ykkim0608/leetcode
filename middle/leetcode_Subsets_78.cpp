#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans ;

        int n = nums.size();
        ans.push_back({});

        for (int i = 0; i < n; i++)
        {
            int sz = ans.size();

            for (int j = 0; j < sz; j++)
            {
                vector<int> temp = ans[j];
                temp.push_back(nums[i]);
                ans.push_back(temp);
            }
        }

        return ans;

       


    }
};

int main()
{
    Solution sol;
    int in_nums,input;
    vector<int> vec_in;
    vector < vector<int>> vec_out;

  
    cin >> in_nums;
    for (int i = 0; i < in_nums; i++)
    {
        cin >> input;
        vec_in.push_back(input);
    }
    vec_out = sol.subsets(vec_in);

    cout << "[";
  
    for (int i = 0; i < vec_out.size(); i++)
    {
        int sz = vec_out[i].size();
      
        cout << "[";
        for (int j = 0; j < sz; j++)
        {
            cout << vec_out[i][j] << ",";
        }
        cout << "]";

     

    }
    cout << "]";


    cout << endl;
}