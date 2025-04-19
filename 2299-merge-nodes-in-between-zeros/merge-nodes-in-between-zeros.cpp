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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*temp=head;
        ListNode*temp2=new ListNode(100);
        ListNode*ans=temp2;
        long long sum=0;
        ListNode*a=head;
        ListNode*b=head->next;
        while(b){
            sum=0;
            while(b->val!=0){
                sum+=b->val;
                b=b->next;
            }
            a=b;
            b=b->next;
            ListNode*c=new ListNode(sum);
            temp2->next=c;
            temp2=temp2->next;
        }
       return ans->next;
    }
};