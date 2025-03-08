// Name: Saiyedul Abrar
// ID: 0812320205101022
// Dept. of Computer Science and Engineering,
// Bangladesh Army University of Engineering & Technology
// Qadirabad Cantonment, Natore, Bangladesh
// Contact: saiyedul.abrar1430@gmail.com, +8801533713957

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

/*
    Algorithm: insert_at_tail
    - Create a new node with the given value.
    - If the list is empty, update head and tail.
    - Otherwise, update the last node’s next pointer and move tail.

    Edge Cases Handled:
    - If head is NULL (empty list), the new node becomes head and tail.

    Time Complexity: O(1) (Direct insertion at tail)
    Space Complexity: O(1) (Only one new node is allocated)
*/
void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {  // Empty list case
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

/*
    Algorithm: print_linked_list
    - Traverses the linked list and prints each node's value.

    Time Complexity: O(N) (Traverses the entire list)
    Space Complexity: O(1) (Uses only a pointer)
*/
void print_linked_list(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    // Creating an initial linked list: 10 -> 20 -> 30
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);  // Correct tail initialization
    head->next = a;
    a->next = tail;

    cout << "Before insertion: ";
    print_linked_list(head);

    // Inserting elements at the tail
    insert_at_tail(head, tail, 40);
    insert_at_tail(head, tail, 50);
    insert_at_tail(head, tail, 60);

    cout << "After insertion: ";
    print_linked_list(head);
    cout << "Tail = " << tail->val << endl;  // Verify the tail pointer

    return 0;
}
