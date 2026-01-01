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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string s1="";
        string s2="";
        while (l1) {
        s1 += (l1->val + '0');
        l1 = l1->next;
        }
        while (l2) {
            s2 += (l2->val + '0');
            l2 = l2->next;
        }

        string result="";
        int i=s1.size()-1;
        int j=s2.size()-1;
        int carry=0;
        while(i>=0 || j>=0 ||carry){
            int a=(i>=0)?s1[i]-'0':0;
            int b=(j>=0)?s2[j]-'0':0;
            int sum=a+b+carry;
            carry=sum/10;
            result+=(sum%10)+48;
            i--;
            j--;
        }
        reverse(result.begin(),result.end());
        ListNode*temp=new ListNode(0);
        ListNode*temp1=temp;
        for(int i=0;i<result.size();i++){
            ListNode*a=new ListNode(result[i]-48);
            temp->next=a;
            temp=temp->next;
        }
        return temp1->next;
    }
};