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
    Algorithm: insert_at_head
    - Create a new node with the given value.
    - Make the new node’s next point to the current head.
    - Update head to point to the new node.

    Time Complexity: O(1) (Direct insertion at head)
    Space Complexity: O(1) (Only one new node is allocated)
*/
void insert_at_head(Node*& head, int val) {
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
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
    // Creating a sample linked list: 10 -> 20 -> 30
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    head->next = a;
    a->next = b;

    cout << "Before insertion: ";
    print_linked_list(head);

    // Inserting nodes at the head
    insert_at_head(head, 100);
    insert_at_head(head, 200);
    insert_at_head(head, 300);

    cout << "After insertion: ";
    print_linked_list(head);

    return 0;
}
