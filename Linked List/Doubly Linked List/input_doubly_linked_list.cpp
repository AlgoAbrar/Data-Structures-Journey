#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }

    print_forward(head);
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
1. The `insert_at_tail` function inserts a new node at the tail of a doubly linked list. If the list is empty, it creates the head and tail node; otherwise, it links the new node to the current tail and updates the tail pointer.
2. The `print_forward` function traverses and prints the values of the doubly linked list from the head to the tail.

Time Complexity:
- `insert_at_tail`: O(1), because inserting a node at the tail takes constant time (just linking the new node).
- `print_forward`: O(n), where n is the number of nodes in the list, because we traverse the list once to print all nodes.

Space Complexity:
- O(1) for the `insert_at_tail` function because no additional space is used except for the new node.
- O(1) for the `print_forward` function because only a few pointers are used during traversal.
*/
