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

void preorder(Node* root)
{
    // Base case: If the current node is NULL, do nothing
    if(root == NULL)
        return;
    
    // Process the current node (print its value)
    cout << root->val << " ";   // root
    
    // Recursively traverse the left subtree
    preorder(root->left);       // left
    
    // Recursively traverse the right subtree
    preorder(root->right);      // right
}

int main()
{
    // Example usage: Creating a binary tree
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    // Setting the child nodes
    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    // Perform preorder traversal and print the nodes
    preorder(root);

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
1. Perform preorder traversal:
   a. Visit the root node and print its value.
   b. Recursively traverse the left subtree.
   c. Recursively traverse the right subtree.
2. The traversal visits the nodes in root-left-right order.

Time Complexity:
- In preorder traversal, each node is visited once, and each recursive call processes one node.
- Therefore, the overall time complexity is **O(n)**, where 'n' is the number of nodes in the binary tree.

Space Complexity:
- The space complexity is determined by the recursion depth.
- In the worst case (unbalanced tree), the recursion depth can be equal to the height of the tree.
- Therefore, the space complexity is **O(h)**, where 'h' is the height of the tree. In the worst case, for a skewed tree, h = n, so the space complexity can be **O(n)**.
*/
