#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int total, total_sum = 0;

        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        for (int i = 0; i < students.size(); i++)
        {
            total = abs(students[i] - seats[i]);

            total_sum += total;
        }

        return total_sum;

    }
};

int main()
{
    return 0;
}