#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> unique;
        int index = 0; // new start index

        sort(arr.begin(), arr.end()); // descending order

        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i; j < arr.size(); j++)
            {
                if (arr[i] == arr[j])
                    index++;
            }
            unique.push_back(index);

            i = i + index-1; // for the search next i, we use -1 value;
            index = 0;
            
        }

        for (int i = 0; i < unique.size(); i++)
        {
            for (int j = i + 1; j < unique.size(); j++)
            {
                if (unique[i] == unique[j])  // number same count is false return
                    return false;
            }
        }
        return true;

    }
};

int main()
{
    Solution s;
    int input_num,input;
    bool output;
    vector<int> vec;

    cin >> input_num;
    for (int i = 0; i < input_num; i++)
    {
        cin >> input;
        vec.push_back(input);
    }
   
    output = s.uniqueOccurrences(vec);

    cout << boolalpha << output << endl;
    return 0;
}