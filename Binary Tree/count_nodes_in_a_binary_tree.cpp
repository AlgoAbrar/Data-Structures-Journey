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

// Function to count the number of nodes in the binary tree
int count_nodes(Node* root)
{
    if(root == NULL)
        return 0;  // If the node is NULL, return 0
    int l = count_nodes(root->left);  // Recursively count the left subtree
    int r = count_nodes(root->right); // Recursively count the right subtree
    return l + r + 1;  // Return the total count of nodes in the tree
}

int main()
{
    Node* root = input_tree();
    cout << count_nodes(root);  // Print the total number of nodes in the tree
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
   - Read the root value of the tree.
   - If the root value is not -1, create a new node and insert it into the queue.
   - For each node, read the left and right child values.
   - If a child value is not -1, create a new node for that child and attach it to the current node.
   - Continue until all the nodes are added and the tree is fully constructed.

2. **Node Counting Function (count_nodes):**
   - Recursively traverse the binary tree.
   - If a node is NULL, return 0 (base case).
   - Otherwise, recursively count the nodes in the left and right subtrees and return the total count (left + right + 1).

Time Complexity:
- **Input Tree (input_tree):**
   - Each node is processed once, and for each node, we perform constant time operations (reading values, creating nodes, and inserting them into the queue).
   - Thus, the time complexity for building the tree is **O(n)**, where 'n' is the number of nodes in the tree.
  
- **Node Counting (count_nodes):**
   - Each node is visited once during the recursive traversal.
   - Thus, the time complexity for counting nodes is **O(n)**, where 'n' is the number of nodes in the tree.

Space Complexity:
- **Input Tree (input_tree):**
   - The space complexity is **O(n)** due to the storage of nodes and the queue for level-order traversal.

- **Node Counting (count_nodes):**
   - The recursive calls for the traversal may use up to **O(h)** space, where 'h' is the height of the tree.
   - In the worst case (skewed tree), the space complexity can be **O(n)**, where 'n' is the number of nodes.
   - In the best case (balanced tree), the space complexity will be **O(log n)**.
*/
