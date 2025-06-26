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
    ListNode* removeNodes(ListNode* head) {
        ListNode*tempN=head;
        vector<int>temp;
        while(head){
            temp.push_back(head->val);
            head=head->next;
        }
        int n=temp.size();
        stack<int>st;
        st.push(temp[n-1]);
        for(int i=n-2;i>=0;i--){
            if(temp[i]>=st.top()) st.push(temp[i]);
        }
        ListNode*a=new ListNode(st.top());
        ListNode*a1=a;
        st.pop();
        while(st.size()>0){
            ListNode*c=new ListNode(st.top());
            st.pop();
            a->next=c;
            a=a->next;
        }
        a->next=NULL;
        return a1;
    }
};