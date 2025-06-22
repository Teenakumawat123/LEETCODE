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
    vector<int> nextLargerNodes(ListNode* head) {
        if(head==NULL) return {};
       vector<int>v;
       while(head){
         v.push_back(head->val);
         head=head->next;
       }
       int n=v.size();
       vector<int>ans(n);
       if(n==0) return {};
       if(n==1) return {0};
       stack<int>st;
       ans[n-1]=0;
       st.push(v[n-1]);
       for(int i=n-2;i>=0;i--){
        while(st.size()>0 && st.top()<=v[i]) st.pop();
        if(st.size()==0) ans[i]=0;
        else ans[i]=st.top();
        st.push(v[i]);
       }
       return ans;
    }
};