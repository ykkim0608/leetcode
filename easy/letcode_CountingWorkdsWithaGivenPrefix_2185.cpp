#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {

        int res = 0;

        for (int i = 0; i < words.size(); i++)
        {
            int index = 0, j = 0;
            string temp = words[i];
   
            
                while (j < pref.size() && index < temp.size())
                {

                    if (pref[j] == temp[index])
                    {
                        j++;
                        index++;
                    }
                    else
                        break;
                }

                if (j == pref.size())res++;
            
        }
        return res;

    }
};


int main()
{
    return 0;
}