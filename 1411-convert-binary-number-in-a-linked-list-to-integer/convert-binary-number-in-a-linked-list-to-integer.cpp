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
    int binary_to_decimal(string s){
        int res=0;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            int num=s[i]-48;
            int x=n-i-1;
            res+=num*(1<<x);
        }
        return res;
    }
    int getDecimalValue(ListNode* head) {
        string s="";
        while(head){
            s+=to_string(head->val);
            head=head->next;
        }
        int ans=binary_to_decimal(s);
        return ans;
    }
};