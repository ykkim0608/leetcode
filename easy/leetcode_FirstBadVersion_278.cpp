#include <iostream>

using namespace std;

class Solution {
  
public:
    bool isBadVersion(int mid,int val)
    {
        if (val > mid)
            return false;
        else
            return true;
    }
    int firstBadVersion(int n, int bad_val) {
        int left = 1;
        int right = n;

        while (left < right)
        {
            int mid = left + (right - left) / 2;
            if (isBadVersion(mid, bad_val))
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }

        return left;

    }
};

int main()
{
    Solution sol;
    int input, output, bad;

    cin >> input >> bad;

    output = sol.firstBadVersion(input, bad);
    cout << output << endl;
}