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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int>s1;//for array 
        ListNode*temp=head;
        for(int i=0;i<nums.size();i++){
            s1.insert(nums[i]);
        }
        ListNode*a=new ListNode(0);
        ListNode*tempA=a;

        while(temp){
            if(s1.find(temp->val)==s1.end()){ 
                ListNode*b=new ListNode(temp->val);
                tempA->next=b;
                tempA=tempA->next;
            }
            temp=temp->next;
        }
        return a->next;
    }
};