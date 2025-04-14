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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode*a1=NULL,*b1=NULL,*temp1=list1,*temp2=list2,*c;
        int n=1;
        while(list1){
            list1=list1->next;
            if(n==a-1) a1=list1;
            if(n==b+1) b1=list1;
            n++;
        }
        while(list2){
            if(list2->next==NULL) c=list2;
            list2=list2->next;
        }
        if(a1==NULL){
            temp1->next=temp2;
            c->next=b1;
            return temp1;
        }
        if(a1!=NULL) a1->next=temp2;
        c->next=b1;
        return temp1;
    }
};