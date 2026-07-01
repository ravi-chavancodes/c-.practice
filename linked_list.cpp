#include<iostream>
using namespace std;

// basic structure of linked list & push front
class node{
public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

class list{
    node* head;
    node* tail;

public:
    list(){
        head = NULL;
        tail = NULL;
    }

    void pushfront(int val) {
        node* newNode = new node(val); // new node

        if(head == NULL)
        {
            head = tail = newNode;
        }
        else{
            newNode->next = head;  // point new node to current head
            head = newNode;        // update head
        }
    }

    void push_back(int val) {
    node* newNode = new node(val);

    // if list is empty
    if (head == NULL) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;  // attach at end
        tail = newNode;        // move tail forward
    }
}
   void printlist(){
    node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
   }
  
};

int main(){
    list ll;

    ll.pushfront(3);
    ll.pushfront(2);
    ll.pushfront(1);

    ll.printlist();

    return 0;
}
