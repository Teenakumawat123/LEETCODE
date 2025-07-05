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
    ListNode* doubleIt(ListNode* head) {
        string s="";
        int n=0;
        while(head){
            s+=(head->val+48);
            head=head->next;
            n++;
        }
        int carry=0;
        string res="";
        for(int i=n-1;i>=0;i--){
            int a=((s[i]-48)*2)+carry;
            int rem=a%10;
            res+=(rem+48);
            carry=a/10;
        }
        if(carry>0) res+=(carry+48);
        reverse(res.begin(),res.end());
        cout<<res;
        ListNode*temp=new ListNode(10);
        ListNode*temp2=temp;

        for(int i=0;i<res.size();i++){
         ListNode*d=new ListNode(res[i]-'0');
         temp->next=d;
         temp=temp->next;
        }
        return temp2->next;
    }
};