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
    void reorderList(ListNode* head) {
        if(head==nullptr||head->next==nullptr) return;
        ListNode* slow = head;
        ListNode* fast = head;

        while(slow->next!=NULL&&fast->next!=NULL&&fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* temp = slow->next;
        slow->next= nullptr;
        ListNode* prev = nullptr;
        while(temp!=NULL){
            ListNode* nextele = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nextele;
        }
        while(prev!=NULL){
            ListNode* nextTail = prev->next;
            ListNode* nextHead = head->next;

            head->next = prev;
            prev->next = nextHead;

            head = nextHead;
            prev = nextTail;
        }
    }
};
