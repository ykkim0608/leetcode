#include <iostream>
#include <list>
#include <vector>

using namespace std;


//Definition for singly-linked list.
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    bool isPalindrome(ListNode* head) {


        if (head->next == NULL)
            return true;

        ListNode* temp = head;
        vector<int> vec;

        while (temp)
        {
            vec.push_back(temp->val);
            temp = temp->next;
        }

        int s = 0, e = vec.size() - 1;

        while (s < e)
        {
            if (vec[s] != vec[e])
                return false;
            s++;  e++;
        }

        return true;

    }
};



int main()
{
    
    return 0;
}