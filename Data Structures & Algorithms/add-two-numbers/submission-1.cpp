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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1->next;
        ListNode* temp2 = l2->next;
        ListNode* sum = new ListNode((l1->val + l2->val)%10);
        int carry = (l1->val+l2->val)/10;
        ListNode* temp3 = sum;
        while(temp1!=NULL||temp2!=NULL){
            int f,s;
            if(temp1==NULL){
                f = 0;
            }
            else f = temp1->val;
            if(temp2==NULL){
                s = 0;
            }
            else s = temp2->val;
            int t = f+s+carry;
            ListNode* newNode = new ListNode(t%10);
            carry = t/10;
            temp3->next = newNode;
            temp3 = temp3->next;
            if(temp1!=NULL) temp1=temp1->next;
            if(temp2!=NULL) temp2=temp2->next;
        }
        if(carry!=0){
            temp3->next = new ListNode(carry);
            temp3 = temp3->next;
            temp3->next = nullptr;
        }
        return sum;
    }
};
