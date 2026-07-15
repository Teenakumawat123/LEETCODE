/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       /*
       1st method
               |
              ***
       4 step that we should follow
           *create deep copy without random connection
           *Alternate linking
           *mark random pointer
           *remove alternate connection
       */

       // second method -->using hashmap

       unordered_map<Node*,Node*>mp;

       Node* a=head;
       Node* b=new Node(10);
       Node* c=b;
       while(a){
        Node* d=new Node(a->val);
        mp[a]=d;
        b->next=d;
        b=b->next;
        a=a->next;
       }
       c=c->next;

       for(auto x:mp){
       Node*o=x.first;
       Node*d=x.second;
       if(o->random!=NULL){
         d->random=mp[o->random];
       }
       }
       return c;
    }
};