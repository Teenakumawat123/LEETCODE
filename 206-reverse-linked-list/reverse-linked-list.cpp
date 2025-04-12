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
 ListNode* getNode(ListNode* temp,int idx){
    for(int i=1;i<=idx;i++){
        temp=temp->next;
    }
    return temp;
 } 

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode*temp=head;
        int size=0;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        int i=0;
        int j=size-1;
        while(i<j){
            ListNode*a=getNode(head,i);
            ListNode*b=getNode(head,j);
            int m=a->val;
            a->val=b->val;
            b->val=m;
            i++;
            j--;
        }
        return head;
    }
};