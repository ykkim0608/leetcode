#include<iostream>
#include<vector>
#include <string>

using namespace std;


class Solution {
public:
    string reorderSpaces(string text) {
        string word;
        vector<string> arr;
        int spaces = 0;

        for (int i = 0; i < text.size(); i++) {
            if (text[i] == ' ') {
                spaces++;
                if (!word.empty()) {
                    arr.push_back(word);
                    word = "";
                }
            }
            else
                word += text[i];
        }

        if (!word.empty()) {
            arr.push_back(word);
        }

        string res = "";

        int sp = 0;
        if (arr.size() <= 1)
            sp = spaces;
        else
            sp = spaces / (arr.size() - 1);

        for (int i = 0; i < arr.size(); i++) {
            res += arr[i];

            if (i == (arr.size() - 1)) {
                res += string(spaces, ' ');

                break;
            }
            res += string(sp, ' ');
            spaces -= sp;


        }
        return res;

    }
};


int main()
{
    Solution sol;
    string input,output;
    getline(cin, input);

    output = sol.reorderSpaces(input);
    cout<< output << endl;

}
