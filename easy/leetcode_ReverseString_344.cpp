#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<char>  reverseString(vector<char>& s) {

        int i = 0, j = s.size()-1;

        while (i < j)
        {
            swap(s[i], s[j]);
            i++, j--;
        }

        return s;


    }
};


int main()
{
    Solution s;
    vector<char> vec_in, vec_out;
    string input; 

    cin >> input;

    for (int i = 0; i < input.size(); i++)
    {
        vec_in.push_back(input[i]);
    }

   

    vec_out = s.reverseString(vec_in);

    for (auto elem : vec_out)
        std::cout << elem << " ";


    return 0; 
}