#include<iostream>
#include<list>
#include<iterator>
using namespace std;

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

void mergeSort(Node* &head) {
    // Base Case
    if (head == NULL || head->next == NULL) {
        return;
    }

    // Split the linked list into two halves
    Node* rightHead = splitAtMid(head);

    // Recursively sort both halves
    mergeSort(head);        // Left half
    mergeSort(rightHead);   // Right half

    // Merge both sorted halves
    head = merge(head, rightHead);
}