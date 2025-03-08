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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insert_at_tail(head,tail,100); // Insert 100 at the tail
    insert_at_tail(head,tail,200); // Insert 200 at the tail
    print_forward(head); // Expected output: 10 20 30 100 200
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
1. The `insert_at_tail` function inserts a new node at the tail of the doubly linked list.
   - It first creates a new node with the given value.
   - If the list is empty (head is NULL), the new node becomes both the head and the tail.
   - If the list is not empty, the current tail's `next` pointer is set to the new node, and the new node's `prev` pointer is updated to point to the current tail. The tail pointer is then updated to the new node.
2. The `print_forward` function prints the values of all nodes from head to tail.

Time Complexity:
- `insert_at_tail`: O(1), because inserting at the tail involves only a constant number of operations (updating pointers).
- `print_forward`: O(n), where n is the number of nodes in the list, as we traverse the entire list to print all nodes.

Space Complexity:
- O(1) for both `insert_at_tail` and `print_forward` functions because no extra space is used except for the temporary pointers during traversal and node creation.
*/
