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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*temp=head;
        ListNode*slow=head;
        ListNode*fast=head;
        int size=0;
        while(head!=NULL){
            size++;
            head=head->next;
        }
        for(int i=1;i<k;i++){
            slow=slow->next;
        }
        for(int i=1;i<size-k+1;i++){
            fast=fast->next;
        }
        int m=slow->val;
        slow->val=fast->val;
        fast->val=m;
        return temp;
    }
};