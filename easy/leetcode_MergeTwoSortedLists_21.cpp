#include <iostream>

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
     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

         ListNode* head;

         if (list1 == NULL) { return list2; }
         if (list2 == NULL) { return list1; }


         if (list1->val < list2->val)
         {
             head = list1;
             list1 = list1->next;
         }
         else
         {
             head = list2;
             list2 = list2->next;
         }

         head->next = mergeTwoLists(list1, list2);

         return head;
     }

 };

 int main()
 {
     
     
     return 0;
 }