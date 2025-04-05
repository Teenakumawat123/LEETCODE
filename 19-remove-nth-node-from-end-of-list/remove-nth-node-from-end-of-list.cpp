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
       ListNode*temp=head;
         ListNode*t=head;
        if(temp->next==NULL && n==1) return NULL;
        int size=0;
        while(head!=NULL){
            size++;
            head=head->next;
        }
        if(size==n){
            temp=temp->next;
            return temp;
        }
       for(int i=0;i<size-n-1;i++){
        t=t->next;
       }
       t->next=t->next->next;
       return temp;
    }
};