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
   
 /*  // next greator element 

void nextGreater(vector<int> arr, vector<int> &ans)
{
    stack<int> s;
    int idx = arr.size() - 1;

    ans[idx] = -1;
    s.push(arr[idx]);

    for (idx = idx - 1; idx >= 0; idx--)
    {
        int curr = arr[idx];

        while (!s.empty() && curr >= s.top())
        {
            s.pop();
        }

        if (s.empty())
        {
            ans[idx] = -1;
        }
        else
        {
            ans[idx] = s.top();
        }

        s.push(curr);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> arr = {6, 8, 0, 1, 3};
    vector<int> ans = {0, 0, 0, 0, 0};

    nextGreater(arr, ans);

    return 0;
}
    */

 /*  //valid paranthesis

    #include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string str) {

    stack<char> s;

    for (int i = 0; i < str.size(); i++) {

        char ch = str[i];

        // Opening brackets
        if (ch == '(' || ch == '[' || ch == '{') {
            s.push(ch);
        }

        // Closing brackets
        else {

            if (s.empty()) {
                return false;
            }

            char top = s.top();

            if ((top == '(' && ch == ')') ||
                (top == '[' && ch == ']') ||
                (top == '{' && ch == '}')) {

                s.pop();
            }
            else {
                return false;
            }
        }
    }

    return s.empty();
}

int main() {

    string str1 = "({[]})";
    string str2 = "([)]";

    cout << isValid(str1) << endl;
    cout << isValid(str2) << endl;

    return 0;
}
    */

 /*  //duplicate paranthesis

bool isDuplicate(string str) {
    stack<char> s;

    for (int i = 0; i < str.size(); i++) {
        char ch = str[i];

        if (ch != ')') {
            s.push(ch);
        } else {
            if (s.top() == '(') {
                return true;   // Duplicate parentheses found
            }

            while (s.top() != '(') {
                s.pop();
            }
            s.pop();   // Remove '('
        }
    }

    return false;
}

int main() {
    string str1 = "(a+b)";
    string str2 = "((a+b)+(c+d))";

    cout << isDuplicate(str1) << endl;
    cout << isDuplicate(str2) << endl;

    return 0;
}
    */

 /*  // max  area in histogram

void maxAreaHistogram(vector<int> height)
{
    int n = height.size();

    vector<int> nsl(n), nsr(n);
    stack<int> s;

    // Next Smaller Left
    nsl[0] = -1;
    s.push(0);

    for(int i=1; i<n; i++)
    {
        while(!s.empty() && height[i] <= height[s.top()])
            s.pop();

        if(s.empty())
            nsl[i] = -1;
        else
            nsl[i] = s.top();

        s.push(i);
    }

    while(!s.empty())
        s.pop();

    // Next Smaller Right
    nsr[n-1] = n;
    s.push(n-1);

    for(int i=n-2; i>=0; i--)
    {
        while(!s.empty() && height[i] <= height[s.top()])
            s.pop();

        if(s.empty())
            nsr[i] = n;
        else
            nsr[i] = s.top();

        s.push(i);
    }

    int maxArea = 0;

    for(int i=0; i<n; i++)
    {
        int h = height[i];
        int width = nsr[i] - nsl[i] - 1;
        int area = h * width;

        maxArea = max(maxArea, area);
    }

    cout << "Max Area of Histogram = " << maxArea << endl;
}

int main()
{
    vector<int> height = {2,1,5,6,2,3};
    maxAreaHistogram(height);

    return 0;
}
    */