/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        ListNode* head;
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;
        if(list1->val >list2->val){
            head = list2;
            curr2= list2->next;
        }
        else{
            head = list1;
            curr1 = list1->next;
        }
        ListNode *temp = head;
        while(curr1!=nullptr&&curr2!=nullptr){
              if(curr1->val > curr2->val){
                temp->next  = curr2;
                curr2 = curr2->next; 
              }
              else{
                temp->next = curr1;
                curr1 = curr1->next;
              }
              temp = temp->next;
        }
        while(curr1!=nullptr){
            temp->next = curr1;
            curr1 = curr1->next;
            temp = temp->next;
        }
        while(curr2!=nullptr){
            temp->next = curr2;
            curr2 = curr2->next;
            temp = temp->next;
        }
        return head;
    }
};
