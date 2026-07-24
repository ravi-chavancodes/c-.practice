#include<iostream>
#include<queue>
using namespace std;

 /*  // queue implement using linked list

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Queue {
    Node* head;
    Node* tail;

public:

    Queue() {
        head = tail = NULL;
    }

    void push(int data) {

        Node* newNode = new Node(data);

        if (head == NULL) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }


    void pop() {

        if (empty()) {
            cout << "Queue is empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;

        delete temp;

        if (head == NULL)
            tail = NULL;
    }


    int front() {

        if (empty()) {
            cout << "Queue is empty\n";
            return -1;
        }

        return head->data;
    }


    bool empty() {

        return head == NULL;
    }
};


int main() {

    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty()) {

        cout << q.front() << endl;
        q.pop();

    }

    return 0;
}
    */
   
 /*  // circular queue implementation

class Queue {
    int *arr;
    int capacity;
    int currSize;
    int f, r;

public:
    Queue(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        currSize = 0;
        f = 0;
        r = -1;
    }

    void push(int data) {
        if (currSize == capacity) {
            cout << "Queue is FULL\n";
            return;
        }

        r = (r + 1) % capacity;
        arr[r] = data;
        currSize++;
    }

    void pop() {
        if (empty()) {
            cout << "Queue is EMPTY\n";
            return;
        }

        f = (f + 1) % capacity;
        currSize--;
    }

    int front() {
        if (empty()) {
            cout << "Queue is EMPTY\n";
            return -1;
        }

        return arr[f];
    }

    bool empty() {
        return currSize == 0;
    }

    void printRear() {
        if (empty()) {
            cout << "Queue is EMPTY\n";
            return;
        }

        cout << arr[r] << endl;
    }
};

int main() {
    Queue q(4);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);   // Queue is full

    cout << q.front() << endl;

    q.pop();

    cout << q.front() << endl;

    q.push(5);

    cout << q.front() << endl;

    q.printRear();

    return 0;
}
    */
   
 /*  // stl

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
    */

    // queue using 2 stack

#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1;
    stack<int> s2;

public:

    void push(int data) {
        // s1 -> s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        // push new element
        s1.push(data);

        // s2 -> s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    void pop() {
        if (!s1.empty()) {
            s1.pop();
        }
    }

    int front() {
        return s1.top();
    }

    bool empty() {
        return s1.empty();
    }
};

int main() {

    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}