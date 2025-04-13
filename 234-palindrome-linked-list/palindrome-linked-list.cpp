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
 ListNode* reverse(ListNode* head) {
       ListNode*prev=NULL,*curr=head,*Next=head;
       while(curr!=NULL){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
       }
       return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode*s=head;
        ListNode*f=head;
        while(f->next!=NULL && f->next->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        ListNode*SN=s->next;// slow next node
        SN=reverse(SN);
         ListNode*a=SN;
         ListNode*b=head;
         while(a){
            if(a->val!=b->val) return false;
            a=a->next;
            b=b->next;
         }
         return true;
    }
};