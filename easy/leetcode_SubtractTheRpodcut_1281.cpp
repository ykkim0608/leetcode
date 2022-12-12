#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product =1,sum =0, result; 

        while (n >= 1)
        {
            product*= n % 10;
            sum += n % 10;
            n = n / 10;   
        }

        return (product - sum);
        

    }
};


int main()
{
    Solution s;
    int input,output; 

    cin >> input;

    output = s.subtractProductAndSum(input);

    cout << output << endl;




}