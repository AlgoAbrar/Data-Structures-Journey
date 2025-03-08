#include<bits/stdc++.h>
using namespace std;

// Define a structure for nodes of the tree
class Node
{
    public:
        int val;   // Value of the node
        Node* left;   // Pointer to the left child
        Node* right;  // Pointer to the right child
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to input tree structure and return the root
Node* input_tree()
{
    int val;
    cin >> val; // Input the root node's value
    Node* root;
    if(val == -1)  
        root = NULL;   // If the value is -1, return NULL (no tree)
    else 
        root = new Node(val);  // Create a new node if the value is valid
    
    queue<Node*> q;
    if(root) q.push(root);
    
    while(!q.empty())
    {
        Node* p = q.front();  // Dequeue the front node
        q.pop();

        int l, r;
        cin >> l >> r;  // Input the left and right children values
        Node* myLeft, *myRight;

        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);  // Create left node if value is valid
        
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);  // Create right node if value is valid

        p->left = myLeft;
        p->right = myRight;

        // Enqueue children nodes
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;   // Return the root of the tree
}

// Function to perform level order traversal and print nodes
void level_order(Node* root)
{
    queue<Node*> q;
    q.push(root);  // Push the root node into the queue
    
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();   // Pop the front node

        cout << f->val << " ";   // Print the node value

        if(f->left) q.push(f->left);  // Enqueue the left child
        if(f->right) q.push(f->right);  // Enqueue the right child
    }
}

// Function to insert a new value into the binary search tree
void insert(Node* &root, int val)
{
    if(root == NULL)
        root = new Node(val);  // If tree is empty, create a new node as the root
    
    if(root->val > val)  // If value is smaller than root, insert in left subtree
    {
        if(root->left == NULL)
            root->left = new Node(val);  // Insert a new node if left child is NULL
        else
            insert(root->left, val);  // Recursively insert in the left subtree
    }
    else  // If value is greater or equal, insert in right subtree
    {
        if(root->right == NULL)
            root->right = new Node(val);  // Insert a new node if right child is NULL
        else
            insert(root->right, val);  // Recursively insert in the right subtree
    }
}

int main()
{
    Node* root = input_tree();   // Input the tree structure
    int val;
    cin >> val;  // Input value to insert into the tree
    insert(root, val);  // Insert the value into the tree
    insert(root, 11);  // Insert another value (11)
    level_order(root);  // Perform level order traversal and print the tree
    return 0;
}

/*
Name: Saiyedul Abrar
ID: 0812320205101022
Dept. of Computer Science and Engineering,
Bangladesh Army University of Engineering & Technology,
Qadirabad Cantonment, Natore, Bangladesh
Contact: saiyedul.abrar1430@gmail.com, +8801533713957

Algorithm Explanation:
1. **input_tree**: This function inputs the tree structure level by level (using a queue) and returns the root node of the tree. The input format expects each node value followed by the values of its left and right children.
2. **insert**: This function inserts a new value into the binary search tree (BST). It recursively finds the appropriate position for the value and inserts it.
3. **level_order**: This function prints the values of the nodes in level order (breadth-first search) using a queue.

Time Complexity:
- **input_tree**: O(n), where n is the number of nodes in the tree. The function processes each node once.
- **insert**: O(h), where h is the height of the tree. In the worst case (unbalanced tree), the height can be n, making the time complexity O(n).
- **level_order**: O(n), where n is the number of nodes in the tree. It processes each node once.

Space Complexity:
- **input_tree**: O(n), where n is the number of nodes in the tree, due to the queue used for level order input.
- **insert**: O(h), where h is the height of the tree, due to the recursive stack used during insertion.
- **level_order**: O(n), where n is the number of nodes in the tree, for the queue used during traversal.
*/
