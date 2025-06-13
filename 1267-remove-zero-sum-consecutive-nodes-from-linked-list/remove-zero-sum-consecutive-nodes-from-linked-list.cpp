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
    ListNode* removeZeroSumSublists(ListNode* head) {
       while(true){
         ListNode*temp=head;
        vector<int>arr;
        unordered_map<int,int>mp;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int start=-1,end=-1;
        int sum=0;
        bool found=false;
        for(int i=0;i<arr.size();i++){
           sum+=arr[i];
           if(sum==0){
            start=0;
            end=i;
            found=true;
            break;
           }
           if(mp.find(sum)!=mp.end()){
            start=mp[sum]+1;
            end=i;
            found=true;
            break;
           }
           mp[sum]=i;
        }
        if(!found) break;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(i<start || i>end){
                ans.push_back(arr[i]);
            }
        }
        ListNode*new_node=new ListNode(10);
        ListNode*new_temp=new_node;
        for(int i=0;i<ans.size();i++){
            ListNode*a=new ListNode(ans[i]);
            new_node->next=a;
            new_node=new_node->next;
        }
        head=new_temp->next;
       }
        return head;
    }
};