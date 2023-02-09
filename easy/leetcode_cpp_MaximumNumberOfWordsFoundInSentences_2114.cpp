#include < iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count = 0;
        int sum = 0;

        for (int i = 0; i < sentences.size(); i++)
        {
            for (int j = 0; j < sentences[i].size(); j++)
            {
                if (sentences[i][j] == ' ')
                    count++;
            }
            if(count >=sum)
            sum = count;
            count = 0;
        }
        return sum + 1;

    }
};

int main()
{

    
    return 0;
}