#include<iostream>

#include<iterator>
using namespace std;

// implementation

class node{
public:
    int data;
    node* next;


  node(int val){
    data = val;
    next = NULL;
  }

};
class list {

    node* head;
    node* tail;

public:
   list(){
 head = NULL;
 tail = NULL;
   }

   // push. front 
   void push_front(int val){

node* newnode = new node(val);

if (head==NULL)
{
    head=tail=newnode;
}
else{
    newnode->next=head;
    head= newnode;
}

   }
// printitng the ll
void print(){
    node* temp = head;

while (temp != NULL)
{
    cout<<temp->data<<"->";
    temp = temp->next;
    
}
cout<<"null"<<endl;
}

void insert (int val,int pos){

    node* newnode = new node(val);

    node* temp = head;
    for (int i = 0; i < pos-1; i++)
    {
        temp = temp->next;
    }
    

    newnode->next=temp->next;
    temp->next= newnode;

}

void pop_front(){
    node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
}


};

int main()
{

    list ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.print();

    ll.insert(10,1);
    
    ll.pop_front();
    ll.print();
    return 0;
}


/* // stl 

void printList(list<int> &ll) {
    list<int>::iterator itr;

    for (itr = ll.begin(); itr != ll.end(); itr++) { // begin = st , end = end->next (null)
        cout << *itr << "->";

    }
    cout <<"null"<< endl;
}

int main(){

    list<int>ll;

    ll.push_front (2);
    ll.push_front (1); //. 1-2

    ll.push_back (3); //.  1->2->3
    ll.push_back(4); //.   1->2->3->4

    printList(ll);
    cout<<ll.size()<<endl;
    cout<<"head = " << ll.front()<<endl;
    cout<<"tail = " << ll.back()<<endl;
    return 0;

}
    */

// merge sort using ll 

/* // zig zag using ll 

// Node
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Linked List
class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = NULL;
        tail = NULL;
    }

    // Insert at end
    void push_back(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    // Print Linked List
    void print() {
        Node* temp = head;

        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Zig-Zag Linked List
    void zigZag() {

        // Step 1 : Find Middle
        Node* slow = head;
        Node* fast = head->next;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        Node* mid = slow;

        // Step 2 : Reverse Second Half
        Node* curr = mid->next;
        mid->next = NULL;

        Node* prev = NULL;
        Node* next = NULL;

        while(curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Step 3 : Merge Alternately
        Node* left = head;
        Node* right = prev;

        while(left != NULL && right != NULL) {

            Node* nextL = left->next;
            Node* nextR = right->next;

            left->next = right;
            right->next = nextL;

            left = nextL;
            right = nextR;
        }
    }
};

int main() {

    List ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);

    cout << "Original Linked List:" << endl;
    ll.print();

    ll.zigZag();

    cout << "Zig-Zag Linked List:" << endl;
    ll.print();

    return 0;
}
    */


// doubly linked list

