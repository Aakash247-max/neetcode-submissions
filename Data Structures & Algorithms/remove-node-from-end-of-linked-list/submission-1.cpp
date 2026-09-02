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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count<n) return head;
        if(count==n){
            head = head->next;
            return head;
        }
        ListNode* temp2 = head;
        int i=0;
        while(temp2!=NULL){
            if(n==count-i-1){
                temp2->next = temp2->next->next;
                break;
            }
            temp2= temp2->next;
            i++;
        }
        return head;
    }
};
