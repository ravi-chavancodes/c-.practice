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
};

int main(){

    list ll;

    // Create List
    ll.pushFront(5);
    ll.pushFront(4);
    ll.pushFront(3);
    ll.pushFront(2);
    ll.pushFront(1);

    cout << "Original List: ";
    ll.printList();

    // Uncomment ONE concept at a time

    // ll.popFront();
    // ll.popBack();
    // ll.insert(100,2);

    cout << "After Operation: ";
    ll.printList();

    cout<<ll.searchitr(2)<<endl;

    return 0;
}