#include<iostream>
using namespace std;
/* // push front , push back ,print ll , delete .
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
*/

 /*  // pop_front
class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

class list {
public:
    node* head;

    list() {
        head = NULL;
    }

    void popFront() {
        if (head == NULL) {
            cout << "List is empty!" << endl;
            return;
        }

        node* temp = head;
        head = head->next;
        delete temp;
    }

    void printlist() {
        node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main() {
    list ll;

    // Creating the list manually
    ll.head = new node(10);
    ll.head->next = new node(20);
    ll.head->next->next = new node(30);

    cout << "Before popFront(): ";
    ll.printlist();

    ll.popFront();

    cout << "After popFront(): ";
    ll.printlist();

    return 0;
}
        */

    // pop_back

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

        while(temp->next != tail){
            temp = temp->next;
        }

        delete tail;
        tail = temp;
        tail->next = NULL;
    }

    void printList(){
        node* temp = head;

        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main(){

    list ll;

    // Create the list
    ll.pushBack(10);
    ll.pushBack(20);
    ll.pushBack(30);
    ll.pushBack(40);

    cout << "Before popBack: ";
    ll.printList();

    ll.popBack();

    cout << "After popBack: ";
    ll.printList();

    return 0;
}