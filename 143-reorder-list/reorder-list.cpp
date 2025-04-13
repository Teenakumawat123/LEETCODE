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
    void reorderList(ListNode* head) {
        ListNode*s=head;
        ListNode*f=head;
        while(f->next!=NULL && f->next->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        ListNode*SN=s->next;// slow next node
        SN=reverse(SN);
         ListNode*a=head;
         ListNode*b=SN;
         s->next=NULL;
         ListNode*ta=head;
         ListNode*tb=SN;
         ListNode*c=new ListNode(100);
         ListNode*tc=c;
         while(ta!=NULL && tb!=NULL){
            tc->next=ta;
            ta=ta->next;
            tc=tc->next;
            tc->next=tb;
            tb=tb->next;
            tc=tc->next;
         }
         tc->next=ta;
         head=c->next;
    }
};