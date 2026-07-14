#include <iostream>
#include <vector>
using namespace std;

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