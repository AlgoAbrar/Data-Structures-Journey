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

// Level-order traversal of the binary tree
void level_order(Node* root)
{
    if (root == NULL)
        return;
    
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout << f->val << " ";

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
}

// Convert a sorted array to a balanced binary search tree (BST)
Node* convert(int a[], int n, int l, int r)
{
    if(l > r)
        return NULL;
    
    // Find the middle element and make it the root
    int mid = (l + r) / 2;
    Node* root = new Node(a[mid]);

    // Recursively build the left and right subtrees
    Node* leftroot = convert(a, n, l, mid - 1);
    Node* rightroot = convert(a, n, mid + 1, r);

    // Attach the left and right subtrees to the root
    root->left = leftroot;
    root->right = rightroot;

    return root;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    // Convert sorted array to balanced BST
    Node* root = convert(a, n, 0, n - 1);

    // Perform level-order traversal to print the tree
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
1. Take input 'n' for the number of elements in the sorted array.
2. Take input the elements of the array.
3. Convert the sorted array into a balanced binary search tree (BST):
   a. Use the middle element of the array as the root.
   b. Recursively construct the left and right subtrees by applying the same approach to the left and right halves of the array.
4. Perform level-order traversal of the constructed binary tree to print the elements.

Time Complexity:
- The time complexity of building the balanced BST is **O(n)**, where 'n' is the number of elements in the array. This is because for each element, we are visiting and processing it once.
- The level-order traversal also takes **O(n)** time since each node is visited exactly once.

Space Complexity:
- The space complexity is **O(n)**, where 'n' is the number of nodes in the binary tree. This is because we are using a queue for level-order traversal and a recursive call stack for building the tree.
*/
