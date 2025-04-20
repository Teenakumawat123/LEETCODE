class Solution {
public:
    Node* flatten(Node* head) {
        Node*curr=head;
        while(curr){
            if(curr->child!=NULL){
                Node*nextNode=curr->next;
                Node*nextChild=curr->child;
                curr->child=NULL;
                nextChild=flatten(nextChild);
                curr->next=nextChild;
                nextChild->prev=curr;
                while(nextChild->next!=NULL){
                    nextChild=nextChild->next;
                }
                nextChild->next=nextNode;
                if(nextNode) nextNode->prev=nextChild;
            }
            curr=curr->next;
        }
        return head;
    }
};