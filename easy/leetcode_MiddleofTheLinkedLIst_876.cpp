#include <iostream>
#include <list>

using namespace std;



 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  class Solution {
  public:
      ListNode* middleNode(ListNode* head) {


          int length = 0;
          ListNode* jump, * forward = head;

          while (jump && jump->next)
          {
              jump = jump->next->next;
              forward = forward->next;
          }


          return forward;

      }
  };

  int main()
  {
      return 0;
  }