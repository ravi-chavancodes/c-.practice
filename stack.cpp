#include<iostream>
#include<vector>
using namespace std;

// create stack using vector 
class stack{
vector<int> vec;
public:
//push
    void push (int val) { //0(1)
    vec. push_back (val);
    }
// pop
    void pop(){//0(1)
        vec.pop_back();
    }
//top
int
top() { //0(1)
int lastIdx = vec.size()-1;
return vec|lastidx
}

bool isempty(){
    return vec.size() == 0;
}

int main(){
    stack s; 

    s. push (3) ;
    s. push (2) ;
    s. push(1) ;
return 0;
}