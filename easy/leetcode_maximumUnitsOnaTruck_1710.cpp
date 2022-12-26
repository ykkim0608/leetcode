#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

bool myfuction(vector<int> i, vector<int> j)
{
    return i[1] > j[1];
}

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int output = 0;

     
        std::sort(boxTypes.begin(), boxTypes.end(), myfuction);

        for (int i = 0; i < boxTypes.size(); i++)
        {
            if (boxTypes[i][0] < truckSize)
            {
                output += (boxTypes[i][0] * boxTypes[i][1]);
                truckSize -= boxTypes[i][0];
            }
            else
            {
                output += (boxTypes[i][1]) * truckSize;
                break;
            }
        }

        return output;

    }
};

int main()
{

    return 0;
}

