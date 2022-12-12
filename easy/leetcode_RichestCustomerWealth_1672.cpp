#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum = 0, max_sum =0;

        for (int i = 0; i < accounts.size(); i++)
        {
            sum = 0;
            for (int j = 0; j < accounts[0].size(); j++)
            {
                sum+= accounts[i][j];
            }
            max_sum = std::max(max_sum, sum);
        }

        return max_sum;
    }

      


  
};


int main()
{
    Solution s;
    int m_num, c_num,input, output;
    std::vector<vector<int>> vec_in2;
    std::vector<int> vec_in1;

    cin >> m_num;
    cin >> c_num;



    for (int i = 0; i < c_num; i++)
    {
        for (int j = 0; j < m_num; j++)
        {
            cin >> input;
            vec_in1.push_back(input);
           
            
        }
        vec_in2.push_back(vec_in1);

    }

  

    output = s.maximumWealth(vec_in2);


    std::cout << output << std::endl;

}

