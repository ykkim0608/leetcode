#include <iostream>
#include <vector>

using namespace std;



class Solution {

private:
    int sum;
    vector<int> vec_output;
public:
    vector<int> runningSum(vector<int>& nums) {

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            vec_output.push_back(sum);
        }

        return vec_output;


    }

};

int main()
{
    Solution s;
    int num, input;
    std::vector<int> vec_in;
    std::vector<int> vec_out;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> input;
        vec_in.push_back(input);
    }

    vec_out = s.runningSum(vec_in);

    for (auto elem : vec_out)
    {
        std::cout << elem << ", ";
    }
    std::cout << std::endl;

}