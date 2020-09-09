struct Node {
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL) {}
};

class MyLinkedList {
public:
    /** Initialize your data structure here. */
    Node* head = new Node(0);
    int n = 0;
    MyLinkedList() {

    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(index >= n) return -1;
        Node* temp = head->next;
        for(int i=0;i<index;i++) temp = temp->next;
        return temp->val;
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        Node* temp = head->next;
        head->next = new Node(val);
        head->next->next = temp;
        n++;
    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        Node* temp = head;
        while(temp->next != NULL) temp = temp->next;
        temp->next = new Node(val);
        n++;
    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index > n) return;
        Node* temp = head;
        for(int i=0;i<index;i++) temp = temp->next;
        Node* new_temp = temp->next;
        temp->next = new Node(val);
        temp->next->next = new_temp;
        n++;
    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index>=n) return;
        Node* temp = head;
        for(int i=0;i<index;i++) temp = temp->next;
        Node* new_temp = temp->next;
        temp->next = new_temp->next;
        new_temp->next = NULL;
        n--;
        delete new_temp;

    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
