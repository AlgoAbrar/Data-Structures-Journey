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

// Function to input the tree
Node* input_tree()
{
    int val;
    cin >> val;
    Node* root;
    if(val == -1)  root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        // 1. Extract the front node
        Node* p = q.front();
        q.pop();

        // 2. Process the current node
        int l,r;
        cin >> l >> r;
        Node* myLeft, *myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. Push the children into the queue
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}

// Function for level order traversal of the tree
void level_order(Node* root)
{
    if(root == NULL)
    {
        cout << "No Tree";
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        // 1. Extract the front node
        Node* f = q.front();
        q.pop();

        // 2. Process the current node
        cout << f->val << " ";

        // 3. Push the children into the queue
        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
}

int main()
{
    Node* root = input_tree();
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
1. **Input Tree Function (input_tree):**
   - Start by reading the root value of the tree.
   - If the root value is not -1, create the root node and insert it into the queue.
   - For each node, read the left and right child values.
   - If a child value is not -1, create a new node for that child and attach it to the current node.
   - Continue until the tree is fully constructed.

2. **Level Order Traversal Function (level_order):**
   - Initialize a queue and start with the root node.
   - For each node, print its value and push its left and right children into the queue.
   - Continue until all nodes are processed.

Time Complexity:
- **Input Tree (input_tree):**
   - Each node is processed once, and for each node, we perform constant time operations (inserting children into the queue).
   - Thus, the time complexity for building the tree is **O(n)**, where 'n' is the number of nodes in the tree.
  
- **Level Order Traversal (level_order):**
   - Similar to input_tree, each node is processed once, and for each node, we perform constant time operations (printing and pushing children into the queue).
   - Thus, the time complexity for level order traversal is **O(n)**, where 'n' is the number of nodes in the tree.

Space Complexity:
- **Input Tree (input_tree):**
   - The space complexity is **O(n)** for storing the tree nodes in memory.
  
- **Level Order Traversal (level_order):**
   - The queue will store up to 'n' nodes in the worst case.
   - Thus, the space complexity for level order traversal is **O(n)**, where 'n' is the number of nodes in the tree.
*/
