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
        // 1. Dequeue the front element
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

        // 3. Enqueue the left and right children if they exist
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}

bool search(Node* root, int val)
{
    if(root == NULL)
        return false;
    if(root->val == val)
        return true;
    if(root->val > val)
        return search(root->left,val);
    else
        return search(root->right,val);
}

int main()
{
    Node* root = input_tree();
    int val;
    cin >> val;
    if(search(root,val))
        cout << "Found\n";
    else
        cout << "Not found\n";
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
1. Create a class `Node` with an integer value and pointers to the left and right children.
2. Implement a function `input_tree()` that takes input from the user to build a binary search tree (BST). The tree is constructed level by level, using a queue to process nodes.
3. Implement a recursive function `search()` that searches for a given value in the tree. The function:
    - Returns `true` if the value is found.
    - Recursively searches the left subtree if the value is smaller than the current node.
    - Recursively searches the right subtree if the value is greater than the current node.
4. In the main function, take input for the tree structure and search for a given value in the tree, printing "Found" or "Not found" based on the result.

Time Complexity:
- `input_tree()`: O(N), where N is the number of nodes in the tree.
- `search()`: O(H), where H is the height of the tree. In the worst case (unbalanced tree), this is O(N). In the best case (balanced tree), this is O(log N).

Space Complexity:
- The space complexity is O(N) for storing the tree in memory, where N is the number of nodes. Additionally, the recursion stack will require O(H) space where H is the height of the tree.

*/

