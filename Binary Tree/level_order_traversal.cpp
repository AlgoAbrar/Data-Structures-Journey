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

void level_order(Node* root)
{
    // 1. Initialize an empty queue to perform level order traversal
    queue<Node*> q;
    q.push(root);  // Add the root node to the queue
    
    while(!q.empty())
    {
        // 2. Dequeue the front element from the queue
        Node* f = q.front();
        q.pop();

        // 3. Process the current node (print its value)
        cout << f->val << " ";

        // 4. Add the children of the current node to the queue
        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
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

    // Perform level order traversal and print the nodes
    level_order(root);

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
1. Initialize an empty queue and push the root node into it.
2. While the queue is not empty, repeat the following:
   a. Dequeue the front node and process it.
   b. If the node has a left child, enqueue the left child.
   c. If the node has a right child, enqueue the right child.
3. The traversal prints the values of nodes level by level from left to right.

Time Complexity:
- Each node is processed once and its children are added to the queue once.
- The queue operations (push, pop) take constant time O(1).
- Therefore, the overall time complexity is **O(n)**, where 'n' is the number of nodes in the tree.

Space Complexity:
- The queue can store at most the number of nodes at a given level. In the worst case, it stores all nodes of a single level at once (in case of a completely unbalanced tree).
- Therefore, the space complexity is **O(n)**, where 'n' is the number of nodes in the tree.
*/
