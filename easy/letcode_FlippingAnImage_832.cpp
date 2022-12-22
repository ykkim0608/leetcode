#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {

public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> output(image.size());

        for (int i = 0; i < image.size(); i++)
        {

            for (int j = image[0].size() - 1; j >= 0; j--)
            {

                output[i].push_back(!image[i][j]);


            }




        }

        return output;

    }
};

int main()
{
    return 0;
}


