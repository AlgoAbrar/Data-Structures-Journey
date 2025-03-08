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

void postorder(Node* root)
{
    // Base case: If the current node is NULL, do nothing
    if(root == NULL)
        return;
    
    // Recursively traverse the left subtree
    postorder(root->left);       // left
    
    // Recursively traverse the right subtree
    postorder(root->right);      // right
    
    // Process the current node (print its value)
    cout << root->val << " ";   // root
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

    // Perform postorder traversal and print the nodes
    postorder(root);

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
1. Perform postorder traversal:
   a. Recursively traverse the left subtree.
   b. Recursively traverse the right subtree.
   c. Visit the root node and print its value.
2. The traversal visits the nodes in left-right-root order.

Time Complexity:
- In postorder traversal, each node is visited once, and each recursive call processes one node.
- Therefore, the overall time complexity is **O(n)**, where 'n' is the number of nodes in the binary tree.

Space Complexity:
- The space complexity is determined by the recursion depth.
- In the worst case (unbalanced tree), the recursion depth can be equal to the height of the tree.
- Therefore, the space complexity is **O(h)**, where 'h' is the height of the tree. In the worst case, for a skewed tree, h = n, so the space complexity can be **O(n)**.
*/
