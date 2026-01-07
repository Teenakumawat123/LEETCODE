class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        // ListNode*temp=head;
        // int n=0;
        // while(temp){
        //     temp=temp->next;
        //     n++;
        // }
        // vector<ListNode*>ans;
        // if(head==NULL){
        //     for(int i=0;i<k;i++){
        //         ans.push_back(head);
        //     }
        //     return ans;
        // }
        // int size=n/k;
        // int rem=n%k;
        // temp=head;
        // while(temp!=NULL){
        //     ListNode*c=new ListNode(100);
        //     ListNode*tempC=c;
        //     int s=size;
        //     if(rem>0){ s++;
        //     rem--;}
        //     for(int i=0;i<s;i++){
        //         tempC->next=temp;
        //         temp=temp->next;
        //         tempC=tempC->next;
        //     }
        //     tempC->next=NULL;
        //     ans.push_back(c->next);
        // }
        // if(ans.size()<k){
        //     for(int i=0;i<=k-ans.size();i++){
        //         ans.push_back(NULL);
        //     }
        // }
        // return ans;

    ListNode* temp = head;
    int n = 0;
    while(temp){
        temp = temp->next;
        n++;
    }

    vector<ListNode*> ans;

    int size = n / k;
    int rem = n % k;
    temp = head;

    for(int i = 0; i < k; i++){
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        int s = size + (rem > 0 ? 1 : 0);
        if(rem > 0) rem--;

        for(int j = 0; j < s; j++){
            curr->next = temp;
            curr = curr->next;
            temp = temp->next;
        }
        if(curr) curr->next = NULL;

        ans.push_back(dummy->next);
    }
    return ans;
 }
};