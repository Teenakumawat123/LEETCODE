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
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* s = head;
        ListNode* f = head;
        while(f->next != NULL && f->next->next != NULL){
            s = s->next;
            f = f->next->next;
        }

        ListNode* a = head;
        ListNode* b = s->next;
        s->next = NULL;

        a = sortList(a);
        b = sortList(b);

        ListNode* c = merge(a, b);
        return c;
    }
};