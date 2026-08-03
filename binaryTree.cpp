#include<iostream>
#include <vector>
#include <queue>
using namespace std ;

/*  // build tree from preorder

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

 /* // inorder , postorder , preoder

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

int idx = -1;

Node* buildTree(vector<int> &nodes) {

    idx++;

    if (nodes[idx] == -1) {
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);

    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}


// Preorder: Root -> Left -> Right
void preorder(Node* root) {

    if (root == NULL) {
        return;
    }

    cout << root->data << " ";

    preorder(root->left);

    preorder(root->right);
}


// Inorder: Left -> Root -> Right
void inorder(Node* root) {

    if (root == NULL) {
        return;
    }

    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
}


// Postorder: Left -> Right -> Root
void postorder(Node* root) {

    if (root == NULL) {
        return;
    }

    postorder(root->left);

    postorder(root->right);

    cout << root->data << " ";
}


int main() {

    vector<int> nodes = {
        1, 2, 4, -1, -1, 5, -1, -1,
        3, -1, 6, -1, -1
    };

    Node* root = buildTree(nodes);

    cout << "Preorder: ";
    preorder(root);
    cout << endl;

    cout << "Inorder: ";
    inorder(root);
    cout << endl;

    cout << "Postorder: ";
    postorder(root);
    cout << endl;

    return 0;
}
    */

 /*  // single line -> tree traversal (level order traversal)

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

int idx = -1;


// Build Binary Tree
Node* buildTree(vector<int> &nodes) {

    idx++;

    // If value is -1, node is NULL
    if (nodes[idx] == -1) {
        return NULL;
    }

    // Create new node
    Node* currNode = new Node(nodes[idx]);

    // Create left subtree
    currNode->left = buildTree(nodes);

    // Create right subtree
    currNode->right = buildTree(nodes);

    return currNode;
}


// Level Order Traversal
// Uses Queue (BFS)
void levelorder(Node* root) {

    // If tree is empty
    if (root == NULL) {
        return;
    }

    // Create queue to store nodes
    queue<Node*> q;

    // Push root node into queue
    q.push(root);


    while (!q.empty()) {

        // Store front node
        Node* curr = q.front();

        // Remove front node from queue
        q.pop();


        // Print current node data
        cout << curr->data << " ";


        // If left child exists, add it to queue
        if (curr->left != NULL) {
            q.push(curr->left);
        }


        // If right child exists, add it to queue
        if (curr->right != NULL) {
            q.push(curr->right);
        }
    }

    cout << endl;
}


int main() {

    vector<int> nodes = {
        1, 2, 4, -1, -1, 5, -1, -1,
        3, -1, 6, -1, -1
    };


    // Build tree
    Node* root = buildTree(nodes);


    // Level order traversal
    levelorder(root);


    return 0;
}
    */

 /*  // multi line -> tree traversal (level order traversal)

// Level Order Traversal
// Order: Level by Level using Queue

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

int idx = -1;


// Build Tree
Node* buildTree(vector<int> &nodes) {

    idx++;

    if (nodes[idx] == -1) {
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);

    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}


// Level Order Traversal (Multi-line)
void levelorder(Node* root) {

    if (root == NULL) {
        return;
    }


    queue<Node*> q;

    q.push(root);


    while (!q.empty()) {


        int levelSize = q.size();


        while (levelSize--) {


            Node* curr = q.front();

            q.pop();


            cout << curr->data << " ";


            if (curr->left != NULL) {
                q.push(curr->left);
            }


            if (curr->right != NULL) {
                q.push(curr->right);
            }
        }


        cout << endl;
    }
}


int main() {

    vector<int> nodes = {
        1, 2, 4, -1, -1, 5, -1, -1,
        3, -1, 6, -1, -1
    };


    Node* root = buildTree(nodes);


    levelorder(root);


    return 0;
}
    */

/*  // height of a tree

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int idx = -1;

Node* buildTree(vector<int> nodes) {
    idx++;

    if (nodes[idx] == -1) {
        return NULL;
    }

    Node* newNode = new Node(nodes[idx]);

    newNode->left = buildTree(nodes);
    newNode->right = buildTree(nodes);

    return newNode;
}

int height(Node* root) {
    if (root == NULL) {
        return 0;
    }

    int leftHt = height(root->left);
    int rightHt = height(root->right);

    int currHt;

    if (leftHt > rightHt) {
        currHt = leftHt + 1;
    }
    else {
        currHt = rightHt + 1;
    }

    return currHt;
}

int main() {

    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    Node* root = buildTree(nodes);

    cout << "Height : " << height(root) << endl;

    return 0;
}
    */

 /*  // count of nodes 

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int idx = -1;

Node* buildTree(vector<int> nodes) {
    idx++;

    if (nodes[idx] == -1) {
        return NULL;
    }

    Node* newNode = new Node(nodes[idx]);

    newNode->left = buildTree(nodes);
    newNode->right = buildTree(nodes);

    return newNode;
}

int count(Node* root) {

    if (root == NULL) {
        return 0;
    }

    int leftCount = count(root->left);
    int rightCount = count(root->right);

    return leftCount + rightCount + 1;
}

int main() {

    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    Node* root = buildTree(nodes);

    cout << "Count : " << count(root) << endl;

    return 0;
}
*/

