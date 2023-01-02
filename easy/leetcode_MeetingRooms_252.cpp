#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {

        int n = intervals.size();
        if (n < 2)
            return true;
        sort(intervals.begin(), intervals.end());

        for (int i = 0; i < intervals.size() - 1; i++)
        {
            if (intervals[i][1] > intervals[i + 1][0])
                return false;
        }


        return true;

    }
};

int main()
{
    Solution sol;
    bool output;
//    vector<vector<int>> vec = { {0, 30},{5, 10},{15, 20} }; //false
    vector<vector<int>> vec = { {7,10},{2,4} };  //true
    output = sol.canAttendMeetings(vec);

    cout << boolalpha << output << endl;

    return 0;
}