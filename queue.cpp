#include<iostream>
#include<queue>
#include<stack>
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

 /*  // queue using 2 stack

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
    */

 /*  // stack using 2 queue

class Stack {
    queue<int> q1;
    queue<int> q2;

public:
    void push(int data) {
        // Move all elements from q1 to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // Push new element into q1
        q1.push(data);

        // Move all elements back to q1
        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }

    void pop() {
        if (!q1.empty()) {
            q1.pop();
        }
    }

    int top() {
        return q1.front();
    }

    bool empty() {
        return q1.empty();
    }
};

int main() {
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);

    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}
    */

 /*  // non repeating letter

void FirstNonRepeat(string str) {
    queue<char> Q;
    int freq[26] = {0};

    for (int i = 0; i < str.size(); i++) {
        char ch = str[i];

        Q.push(ch);
        freq[ch - 'a']++;

        while (!Q.empty() && freq[Q.front() - 'a'] > 1) {
            Q.pop();
        }

        if (Q.empty()) {
            cout << "-1\n";
        } else {
            cout << Q.front() << "\n";
        }
    }
}

int main() {
    string str = "aabccxb";

    FirstNonRepeat(str);

    return 0;
}
    */

 /*  // interleave 2 queues

void interleave(queue<int>& org) {
    int n = org.size();

    queue<int> first;

    // Store first half
    for (int i = 0; i < n / 2; i++) {
        first.push(org.front());
        org.pop();
    }

    // Interleave both halves
    while (!first.empty()) {
        org.push(first.front());
        first.pop();

        org.push(org.front());
        org.pop();
    }
}

int main() {
    queue<int> org;

    for (int i = 1; i <= 10; i++) {
        org.push(i);
    }

    interleave(org);

    while (!org.empty()) {
        cout << org.front() << " ";
        org.pop();
    }

    cout << endl;

    return 0;
}
    */

    // reverse a queue

void reverse(queue<int> &q) {
    stack<int> s;

    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

int main() {
    queue<int> q;

    for (int i = 1; i <= 5; i++) {
        q.push(i);
    }

    reverse(q);

    for (int i = 1; i <= 5; i++) {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;

    return 0;
}