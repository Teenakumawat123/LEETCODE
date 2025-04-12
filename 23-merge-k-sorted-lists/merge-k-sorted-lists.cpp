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
  ListNode* merge(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode*a=list1;
        ListNode*b=list2;
        ListNode*temp;
        if(a->val<=b->val){
            temp=a;
            a=a->next;
        }
        else{
            temp=b;
            b=b->next;
        }
        if(b==NULL){temp->next=a; return temp;}
        if(a==NULL){temp->next=b;return temp;}
        ListNode*head=temp;
        while(a!=NULL && b!=NULL){
            if(a->val<=b->val){
             temp->next=a;
             temp=temp->next;
             a=a->next;
             if(a==NULL){
                temp->next=b;
                return head;
             }
            }
            else{
                temp->next=b;
                temp=temp->next;
                  b=b->next;
                if(b==NULL){
                    temp->next=a;
                    return head;
                }
            }
        }
        return head;
    }
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        while(lists.size()>1){
            ListNode*a=lists[0];
            lists.erase(lists.begin());
            ListNode*b=lists[0];
            lists.erase(lists.begin());
            ListNode*c=merge(a,b);
            lists.push_back(c);
        }
        return lists[0];
    }
};