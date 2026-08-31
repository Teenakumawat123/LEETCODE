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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head->next->next==NULL) return {-1,-1};
        vector<int>v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        //if(v.size()==0) return {-1,-1};
        vector<int>ans;
        for(int i=1;i<v.size()-1;i++){
            if(v[i]>v[i-1] && v[i]>v[i+1]) ans.push_back(i+1);
            if(v[i]<v[i-1] && v[i]<v[i+1]) ans.push_back(i+1);
        }
        if(ans.size()==0 || ans.size()==1) return {-1,-1};
        int mi=INT_MAX;
        int ma=INT_MIN;
        for(int i=0;i<ans.size()-1;i++){
            mi=min(mi,abs(ans[i]-ans[i+1]));
            ma=max(ma,abs(ans[i]-ans[i+1]));
        }
        mi=min(mi,abs(ans[0]-ans[ans.size()-1]));
        ma=max(ma,abs(ans[0]-ans[ans.size()-1]));

        return {mi,ma};
    }
};