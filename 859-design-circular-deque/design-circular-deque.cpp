class Node
{
public:
    int val;
    Node *next = NULL;
    Node *prev = NULL;
    Node(int val) : val(val), next(NULL), prev(NULL) {}
};
class MyCircularDeque {
public:
    Node *head;
    Node *tail;
    int s;
    int c;
    MyCircularDeque(int k) {
        c=k;
        s=0;
        head = tail = NULL;
    }
    
    bool insertFront(int val) {
        Node *temp = new Node(val);
        if (s == 0)

            head = tail = temp;
        if(s==c) return false;    
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        s++;
        return true;
    }
    
    bool insertLast(int val) {
        Node *temp = new Node(val);
        if (s == 0)

            head = tail = temp;
        if(s==c)  return false;  
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        s++;
        return true;
    }
    
    bool deleteFront() {
        if (s == 0) return false;
        Node*temp=head;
        if(head->next==NULL) head=temp;
        head = head->next;
        s--;
        return true;
    }
    
    bool deleteLast() {
    if (s == 0) return false; // empty deque
    if (s == 1) {
        delete tail;
        head = tail = NULL;
        s = 0;
        return true;
    }
    Node* temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }

    temp->next = head; 
    delete tail;
    tail = temp;
    s--;
    return true;
}
    
    int getFront() {
        if(s==0) return -1;
        else return head->val;
    }
    
    int getRear() {
        if(s==0) return -1;
        else return tail->val;
    }
    
    bool isEmpty() {
        if(s==0) return true;
        return false;
    }
    
    bool isFull() {
        if(s==c) return true;
        else return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */