#include<iostream>
using namespace std;

// Node
class node{
public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

// Linked List
class list{
    public:
    node* head;
    node* tail;

public:
    // Constructor
    list(){
        head = NULL;
        tail = NULL;
    }

    // Push Front
    void pushFront(int val){
        node* newNode = new node(val);

        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }

    // Push Back
    void pushBack(int val){
        node* newNode = new node(val);

        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Pop Front
    void popFront(){

        if(head == NULL){
            cout << "List is empty!" << endl;
            return;
        }

        node* temp = head;
        head = head->next;
        delete temp;

        if(head == NULL){
            tail = NULL;
        }
    }

    // Pop Back
    void popBack(){

        if(head == NULL){
            cout << "List is empty!" << endl;
            return;
        }

        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }

        node* temp = head;

        while(temp->next->next != tail){
            temp = temp->next;
        }

        delete tail;
        tail = temp;
        tail->next = NULL;
    }

    // Insert at Position
    void insert(int val,int pos){

        node* newNode = new node(val);

        node* temp = head;

        for(int i=0;i<pos-1;i++){
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Print List
    void printList(){

        node* temp = head;

        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    int searchitr(int key){
        node* temp=head;
        int idx =0;
        while (temp!= NULL)
        {
            if (temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }
// Recursive Search Helper
int helper(node* temp, int key){

    // Base Case 1: Key not found
    if(temp == NULL){
        return -1;
    }

    // Base Case 2: Key found
    if(temp->data == key){
        return 0;
    }

    // Recursive Call
    int idx = helper(temp->next, key);

    if(idx == -1){
        return -1;
    }

    return idx + 1;
}

// Search Function
int searchrec(int key){
    return helper(head, key);
}

// Reverse Linked List
void reverse(){

    node* prev = NULL;
    node* curr = head;

    while(curr != NULL){

        node* next = curr->next;

        curr->next = prev;
        prev = curr;
        curr = next;
    }

    tail = head;
    head = prev;
}

// Check Cycle
bool iscycle(node* head) {
    node* slow = head;
    node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            cout << "Cycle exists" << endl;
            return true;
        }
    }

    cout << "Cycle not there" << endl;
    return false;
}

};

