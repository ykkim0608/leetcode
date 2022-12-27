#include <iostream>
#include <vector>
#include <unordered_set>


using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1(begin(nums1),end(nums1)), s2(begin(nums2),end(nums2));
        vector<vector<int>> ans(2);

        for (int n : s1)
        {
            if (s2.count(n) == 0)
                ans[0].push_back(n);
        }
        for (int n : s2)
        {
            if (s1.count(n) == 0)
                ans[1].push_back(n);
        }

        return ans;
     }
};

int main()
{
    return 0;
}