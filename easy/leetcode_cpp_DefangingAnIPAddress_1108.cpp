#include <iostream>
#include <string>

class Solution {
public:
    std::string defangIPaddr(std::string address) {
        std::string result;
        for (int i = 0; i < address.size(); i++)
        {
            if (address[i] = '.')
            {
                result = result + "[.]";
            }
            else
            {
                result = result + address[i];
            }

        }

        return result;

    }
};

int main()
{
    Solution sol;
    std::string address = "1.1.1.1";

    std::string output;
    output = sol.defangIPaddr(address);

    std::cout << output << std::endl;
}