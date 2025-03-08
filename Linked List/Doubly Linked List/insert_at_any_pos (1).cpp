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

void insert_at_any_pos(Node* head,int idx, int val)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    for(int i=1;i<idx;i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
    newNode->prev = tmp;
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

    insert_at_any_pos(head,2,100); // Insert 100 at position 2
    insert_at_any_pos(head,1,500); // Insert 500 at position 1
    print_forward(head); // Expected output: 500 10 100 20 30
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
1. The `insert_at_any_pos` function inserts a new node at a specified position `idx` in the doubly linked list.
   - It first traverses the list to find the node just before the target position.
   - Then, it inserts the new node by adjusting the `next` and `prev` pointers of the surrounding nodes.
2. The `print_forward` function prints the values of all nodes in the list from head to tail.

Time Complexity:
- `insert_at_any_pos`: O(n), where n is the number of nodes in the list. This is because we need to traverse the list to find the correct position, which takes linear time.
- `print_forward`: O(n), where n is the number of nodes in the list, as we traverse the entire list to print all nodes.

Space Complexity:
- O(1) for both `insert_at_any_pos` and `print_forward` functions because no additional space is used except for the new node and the temporary pointers during traversal.
*/
