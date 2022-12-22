#include <iostream>
#include <string>



class Solution {
public:
    std::string reverseWords(std::string s) {
        int index =0;

        for (int i = 0; i <= s.size(); i++)
        {
            if (i == s.size() || s[i] == ' ')
            {
                std::reverse(s.begin() + index, s.begin() + i);
                index = i + 1;
            }
            
        }

        return s;

    }
};

int main()
{
    Solution s;
    std::string s_in, s_out;
    int index = 0;

    std::getline(std::cin, s_in);

    s_out = s.reverseWords(s_in);

    for (auto s_elem : s_out)
    {
        std::cout << s_elem;
    }
    std::cout << std::endl;

#if 0
    for (int i = 0; i <= s_out.size(); i++)
    {
        if (i == s_out.size() || s_out[i] == ' ')
        {
            
            index = i + 1;
            std::cout << s_out<<;
        }

    }
#endif

    //std::cout << std::endl;


}