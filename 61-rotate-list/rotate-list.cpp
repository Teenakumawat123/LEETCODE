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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return head;
        ListNode*temp=head;
        ListNode*last=head;
        int size=0;
        while(temp!=NULL){
           size++;
           if(temp->next==NULL) last=temp;
           temp=temp->next;
        }
        if(size==k) return head;
        if(k>size) k=k%size;
        ListNode*newnode=head;
        for(int i=1;i<size-k;i++){
            newnode=newnode->next;
        }
        last->next=head;
        // newnode->next=NULL;
        head=newnode->next;
        newnode->next=NULL;
        return head;
    }
};