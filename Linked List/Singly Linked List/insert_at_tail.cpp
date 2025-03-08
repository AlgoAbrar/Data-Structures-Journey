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
    - Otherwise, traverse the list to find the last node and insert the new node.

    Edge Cases Handled:
    - If head is NULL (empty list), the new node becomes head.

    Time Complexity: O(N) (Traverses the list to find the tail)
    Space Complexity: O(1) (Only one new node is allocated)
*/
void insert_at_tail(Node*& head, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {  // Empty list case
        head = newnode;
        return;
    }

    Node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newnode;
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
    Node* head = NULL;

    // Inserting elements at the tail
    insert_at_tail(head, 40);
    insert_at_tail(head, 50);
    insert_at_tail(head, 60);

    cout << "Linked List after insertion: ";
    print_linked_list(head);

    return 0;
}
