/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*tempA=headA;
        ListNode*tempB=headB;
        int lenA=0,lenB=0;
        while(headA!=NULL){
            lenA++;
            headA=headA->next;
        }
        while(headB!=NULL){
            lenB++;
            headB=headB->next;
        }
        if(lenA>lenB){
            for(int i=0;i<abs(lenA-lenB);i++){
                tempA=tempA->next;
            }
        }
        else if(lenB>lenA){
            for(int i=0;i<abs(lenA-lenB);i++){
                tempB=tempB->next;
            }
        }
        while(tempA!=NULL && tempB!=NULL){
            if(tempA==tempB) break;
            else{
                tempA=tempA->next;
                tempB=tempB->next;
            }
        }
        return tempA;
    }
};