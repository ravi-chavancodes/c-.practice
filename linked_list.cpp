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

    // deleting ll (distruct)
    ~node(){
        cout<<"node"<<data<<endl;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        
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

    // deleting ll (distructor)
    ~list(){
        cout<<"~list"<<endl;
        if (head != NULL)
        {
        delete head;
        head = NULL;
        }
        
    }
// push front
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
// push back
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
// print list
   void printlist(){
    node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL\n";
   }

   void insert(int val , int pos){
    node* newNode = new node(val);
    
    node* temp = head; 
    for (int i = 0; i < pos -1; i++)
    {
        temp = temp->next;
    }

    //temp is now at pos-1 i.e. prev/left
    newNode->next = temp->next; 
    temp->next = newNode; 
    
   }
  
};

int main(){
    list ll;

    ll.pushfront(3);
    ll.pushfront(2);
    ll.pushfront(1);

    ll.printlist();//1-2-3

    ll.push_back(4);
    ll.push_back(5);

    ll.printlist();// 1-2-3-4-5-null
    
    ll.insert(100,2);
    ll.printlist();//1-2-100-3-4-5-null
    return 0;
}
