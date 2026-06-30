#include<iostream>
using namespace std;

/* // basic structure of linked list
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
        node* newNode = new node(val); // dynamic

        if(head == NULL)
        {
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
};

int main(){
    list ll;

    ll.pushfront(3);
    ll.pushfront(2);
    ll.pushfront(1);

    return 0;
}
*/