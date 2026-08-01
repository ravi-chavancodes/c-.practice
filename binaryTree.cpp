#include<iostream>
#include <vector>
using namespace std ;

/* // build tree from preorder

// Node class represents each node of the binary tree
class Node {
public:
    int data;       // Stores the value of the node
    Node* left;     // Pointer to the left child
    Node* right;    // Pointer to the right child

    // Constructor to initialize a new node
    Node(int data) {
        this->data = data;   // Assign value to the node
        left = right = NULL; // Initially both children are NULL
    }
};

int idx = -1; // Global index to traverse the preorder array

// Function to build the binary tree
Node* buildTree(vector<int> &nodes) {
    idx++; // Move to the next element in the preorder array

    // If current value is -1, this node is NULL
    if (nodes[idx] == -1) {
        return NULL;
    }

    // Create a new node with the current value
    Node* currNode = new Node(nodes[idx]);

    // Recursively build the left subtree
    currNode->left = buildTree(nodes);

    // Recursively build the right subtree
    currNode->right = buildTree(nodes);

    // Return the root of the constructed subtree
    return currNode;
}

int main() {

    // Preorder representation of the binary tree
    // -1 represents a NULL node
    vector<int> nodes = {
        1, 2, 4, -1, -1, 5, -1, -1,
        3, -1, 6, -1, -1
    };

    // Build the binary tree and store its root
    Node* root = buildTree(nodes);

    // Print the root node's value
    cout << "Root = " << root->data << endl;

    return 0; // Program ends successfully
}
    */
   