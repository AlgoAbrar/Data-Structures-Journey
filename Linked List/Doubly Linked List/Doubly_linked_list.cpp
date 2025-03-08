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

void print_backward(Node* tail)
{
    Node* tmp = tail;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
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

    print_forward(head);  // Print the list from head to tail
    print_backward(tail); // Print the list from tail to head
    
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
1. The print_forward function traverses the doubly linked list from head to tail, printing the values.
2. The print_backward function traverses the doubly linked list from tail to head, printing the values.
3. The main function sets up a doubly linked list with three nodes, and then calls both print_forward and print_backward to display the list in both directions.

Time Complexity:
- O(n): The time complexity for both print_forward and print_backward is O(n), where n is the number of nodes in the list. In both cases, we are traversing the entire list once.

Space Complexity:
- O(1): No additional space is used during traversal, as we only use a few pointer variables for iteration. The space complexity remains constant.
*/
