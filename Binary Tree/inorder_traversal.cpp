#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to perform inorder traversal of the binary tree
void inorder(Node* root)
{
    if(root == NULL)
        return;  // If the node is NULL, return
    inorder(root->left);       // Recursively visit the left subtree
    cout << root->val << " ";   // Process the current node (root)
    inorder(root->right);      // Recursively visit the right subtree
}

int main()
{
    // Creating nodes for the tree
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    // Building the tree structure
    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    inorder(root);  // Perform inorder traversal and print the result

    return 0;
}

/*
Name: Saiyedul Abrar
ID: 0812320205101022
Dept. of Computer Science and Engineering,
Bangladesh Army University of Engineering & Technology,
Qadirabad Cantonment, Natore, Bangladesh
Contact: saiyedul.abrar1430@gmail.com, +8801533713957

Algorithm:
1. **Inorder Traversal Function (inorder):**
   - Recursively traverse the binary tree in the following order:
     - Visit the left subtree first.
     - Process the current node (root).
     - Visit the right subtree last.
   - The traversal visits each node exactly once and prints the value of the node in the inorder sequence.

Time Complexity:
- **Inorder Traversal (inorder):**
   - Each node is visited once, and each visit involves constant-time operations (printing the value).
   - Therefore, the time complexity of the inorder traversal is **O(n)**, where 'n' is the number of nodes in the tree.

Space Complexity:
- **Inorder Traversal (inorder):**
   - The space complexity is dominated by the recursion call stack, which can go as deep as the height of the tree.
   - In the worst case (skewed tree), the space complexity is **O(n)**, where 'n' is the number of nodes in the tree.
   - In the best case (balanced tree), the space complexity is **O(log n)**, where 'n' is the number of nodes.
*/
