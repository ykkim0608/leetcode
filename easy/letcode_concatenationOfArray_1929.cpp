#include <iostream>
#include <vector>

using namespace std;



class Solution {

private:
    #define MAX_COUNT 2
    int count = 0, i =0;
    vector<int> vec_output;
public:
    vector<int> getConcatenation(vector<int>& nums) {

        while (count < MAX_COUNT)
        {
            for ( i = 0; i < nums.size(); i++)
            {
                vec_output.push_back(nums[i]);
            }
            count++;
            i = 0;
        }

        return vec_output;
    

    }

};

int main()
{
    Solution s;
    int num, input ;
    std::vector<int> vec_in;
    std::vector<int> vec_out;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> input;
        vec_in.push_back(input);
    }

   vec_out =  s.getConcatenation(vec_in);

   for (auto elem : vec_out)
   {
       std::cout << elem <<", ";
   }
   std::cout << std::endl;

}