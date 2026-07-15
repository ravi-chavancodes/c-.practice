#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

/*  // stack
class Stack {
    vector<int> vec;

public:
    // Push
    void push(int val) {
        vec.push_back(val);
    }

    // Pop
    void pop() {
        if (!isempty()) {
            vec.pop_back();
        }
    }

    // Top
    int top() {
        if (isempty()) {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return vec[vec.size() - 1];
    }

    // Check if empty
    bool isempty() {
        return vec.size() == 0;
    }
};

int main() {
    Stack s;

    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.isempty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
*/

/*  // ll in stack

template <class T>
class Stack {
    list<T> ll;

public:
    // Push
    void push(T val) {
        ll.push_front(val);
    }

    // Pop
    void pop() {
        if (!isempty()) {
            ll.pop_front();
        }
    }

    // Top
    T top() {
        if (isempty()) {
            cout << "Stack is Empty" << endl;
            return T();
        }
        return ll.front();
    }

    // Check if Empty
    bool isempty() {
        return ll.empty();
    }
};

int main() {
    Stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.isempty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;s
}
    */