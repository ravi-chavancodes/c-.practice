#include <iostream>
#include <vector>
#include <string>
#include <list>
#include<stack>
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

    return 0;
}
    */

 /*  // push at bottom of stack

void pushAtBottom(stack<int> &s, int x) {
    // Base case
    if (s.empty()) {
        s.push(x);
        return;
    }

    // Save top element
    int top = s.top();
    s.pop();

    // Push x at bottom
    pushAtBottom(s, x);

    // Put saved element back
    s.push(top);
}

int main() {
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    pushAtBottom(s, 4);

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
*/

 /*  // reverse a stack

// Push element at bottom
void pushAtBottom(stack<int> &s, int x) {
    if (s.empty()) {
        s.push(x);
        return;
    }

    int top = s.top();
    s.pop();

    pushAtBottom(s, x);

    s.push(top);
}

// Reverse the stack
void reverseStack(stack<int> &s) {
    if (s.empty())
        return;

    int top = s.top();
    s.pop();

    reverseStack(s);

    pushAtBottom(s, top);
}

int main() {
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    reverseStack(s);

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
    */
   
 /* // stock span problem

void stockSpanProblem(vector<int> &stock, vector<int> &span)
{
    stack<int> s;

    s.push(0);
    span[0] = 1;

    for (int i = 1; i < stock.size(); i++)
    {
        int currPrice = stock[i];

        while (!s.empty() && currPrice >= stock[s.top()])
        {
            s.pop();
        }

        if (s.empty())
        {
            span[i] = i + 1;
        }
        else
        {
            int prevHigh = s.top();
            span[i] = i - prevHigh;
        }

        s.push(i);
    }

    for (int i = 0; i < span.size(); i++)
    {
        cout << span[i] << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> stock = {100, 80, 60, 70, 60, 75, 85};
    vector<int> span(stock.size(), 0);

    stockSpanProblem(stock, span);

    return 0;
}
    */
   