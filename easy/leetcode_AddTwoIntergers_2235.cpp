#include <iostream>
#include <vector>

using namespace std;



class Solution {

public:
    int sum(int num1, int num2)
    {
        
            sum_val = num1 + num2;

            return sum_val;
      
    }

private:
    int sum_val;


};

int main()
{
    Solution s;
    int nums,input[2],output;
   
    for (int i = 0; i < 2; i++)
    {
        cin >> input[i];
    }

    output = s.sum(input[0],input[1]);

    std::cout << output << std::endl;



    

}