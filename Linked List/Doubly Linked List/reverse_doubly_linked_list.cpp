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

void reverse_doubly(Node* head, Node* tail)
{
    for(Node *i=head,*j=tail; i!=j && i->prev !=j ; i=i->next, j=j->prev)
    {
        swap(i->val,j->val);
    }
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
    print_forward(head);        // Print list in original order
    reverse_doubly(head,tail);  // Reverse the doubly linked list
    print_forward(head);        // Print list in reversed order
    cout << head->val << endl;  // Print head value
    cout << tail->val << endl;  // Print tail value
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
2. The `reverse_doubly` function reverses the doubly linked list by swapping the values of nodes from the front and back towards the middle:
   - It uses two pointers: `i` starting from the head and `j` starting from the tail.
   - It continues swapping until the two pointers meet or cross.

Time Complexity:
- `insert_at_tail`: O(1), because inserting at the tail involves only a constant number of operations (updating pointers).
- `print_forward`: O(n), where n is the number of nodes in the list, as we traverse the entire list to print all nodes.
- `reverse_doubly`: O(n), where n is the number of nodes in the list, as it involves iterating over the list and swapping node values.

Space Complexity:
- O(1) for `insert_at_tail`, `print_forward`, and `reverse_doubly` functions because no extra space is used except for the temporary pointers and node creation.
*/
