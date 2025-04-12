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
    ListNode* partition(ListNode* head, int x) {
        ListNode*temp=head;
        ListNode*lo=new ListNode(100);
        ListNode*tl=lo;
        ListNode*hi=new ListNode(20);
        ListNode*thi=hi;
        while(head!=NULL){
        if(head->val<x){
            lo->next=head;
            head=head->next;
            lo=lo->next;
        }
        else{
            hi->next=head;
            head=head->next;
            hi=hi->next;
        }
        }
        lo->next=thi->next;
        hi->next=NULL;
        return tl->next;
    }
};