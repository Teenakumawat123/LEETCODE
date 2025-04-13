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
        //create deep copy
        ListNode*n=new ListNode(20);//node
        ListNode*tempN=n;//temp node
        ListNode*temp=head;
        while(temp!=NULL){
           ListNode*node=new ListNode(temp->val);
           tempN->next=node;
           tempN=tempN->next;
           temp=temp->next;
        }
        n=n->next;
        n=reverse(n);

        ListNode*a=head;
        ListNode*b=n;
        while(a){
            if(a->val!=b->val) return false;
            a=a->next;
            b=b->next;
        }
        return true;
    }
};