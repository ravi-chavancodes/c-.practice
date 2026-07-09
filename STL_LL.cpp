#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int>ll;

    ll.push_front (2);
    ll.push_front (1); //. 1-2

    ll.push_back (3); //.  1->2->3
    ll.push_back(4); //.   1->2->4

}