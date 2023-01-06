#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        for (int i = 0; i < n; i++)
        {
            nums1[m + i] = nums2[i];
        }

        std::sort(nums1.begin(), nums1.end());

        for(auto& elem: nums1)
        {
            cout << elem <<",";
        }
        cout << endl;

    }
};

int main()
{
    Solution sol;

    int in_nums1,in_nums2, input1, input2, target_m, target_n;
    vector<int> vec1;
    vector<int> vec2;

    cin >> in_nums1;
    cin >> target_m;
    for (int i = 0; i < in_nums1; i++)
    {
        cin >> input1;
        vec1.push_back(input1);
    }
    cin >> in_nums2;
    cin >> target_n;
    for (int i = 0; i < in_nums2; i++)
    {
        cin >> input2;
        vec2.push_back(input2);
    }
    sol.merge(vec1, target_m, vec2 , target_n);
   
    return 0;
}