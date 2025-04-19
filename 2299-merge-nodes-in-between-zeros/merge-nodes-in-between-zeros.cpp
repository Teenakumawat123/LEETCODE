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
        ListNode*temp=new ListNode(100);
        ListNode*ans=temp;
        long long sum=0;
        ListNode*a=head->next;
        while(a){
            sum=0;
            while(a->val!=0){
                sum+=a->val;
                a=a->next;
            }
            a=a->next;
            ListNode*b=new ListNode(sum);
            temp->next=b;
            temp=temp->next;
        }
       return ans->next;
    }
};