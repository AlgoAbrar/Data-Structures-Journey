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
        // 1. Node ber kora
        Node* p = q.front();
        q.pop();

        // 2. Node niye kaj
        int l,r;
        cin >> l >> r;
        Node* myLeft, *myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. Children Push
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}

int max_height(Node* root)
{
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL)
        return 0;
    int l = max_height(root->left);
    int r = max_height(root->right);
    
    return max(l,r) + 1;
}

int main()
{
    Node* root = input_tree();
    cout << max_height(root);
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
1. Define a class `Node` with an integer value and pointers to the left and right children.
2. Implement the `input_tree()` function that constructs a binary tree by reading values from input:
    - The input follows a level-order traversal format, where -1 represents a NULL node.
    - Use a queue to handle the node processing and add left and right children to each node.
3. Implement a function `max_height()` to calculate the height of the binary tree:
    - If the node is NULL, return 0.
    - If the node is a leaf node (both left and right are NULL), return 0.
    - Recursively calculate the height of the left and right subtrees, returning the maximum of the two heights plus 1.
4. In the main function, call the `input_tree()` to construct the tree, then call `max_height()` to compute and print the height of the tree.

Time Complexity:
- `input_tree()`: O(N), where N is the number of nodes in the tree, as it processes each node exactly once.
- `max_height()`: O(N), where N is the number of nodes in the tree. The function recursively traverses the entire tree to calculate the maximum height.

Space Complexity:
- The space complexity is O(N) due to the space required to store the binary tree in memory, where N is the number of nodes. Additionally, the recursion stack will use O(H) space, where H is the height of the tree (in the worst case, O(N)).

*/
