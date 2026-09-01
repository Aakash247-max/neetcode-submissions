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
    bool hasCycle(ListNode* head) {
        ListNode* temp = head;
        if(head==nullptr) return false;
        unordered_map<int,int> mpp;
        while(temp->next!=NULL){
            if(mpp.find(temp->val)!=mpp.end()){
                return true;
            }
            mpp[temp->val]++;
            temp = temp->next;
        }
        return false;
    }
};
