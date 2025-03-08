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
    - Creates a new node with the given value.
    - If the list is empty, set both head and tail to this new node.
    - Otherwise, attach the new node to the tail and update the tail pointer.

    Time Complexity: O(1) (constant-time insertion at tail)
    Space Complexity: O(1) (only one new node is allocated)
*/
void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

/*
    Algorithm: print_linked_list
    - Traverses the list from the head and prints each node’s value.

    Time Complexity: O(N) (traverses the entire list)
    Space Complexity: O(1) (only a pointer is used)
*/
void print_linked_list(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

/*
    Algorithm: delete_tail
    - If the list is empty, print an error message.
    - If there is only one node, delete it and set head & tail to NULL.
    - Otherwise, traverse to the second-last node.
    - Delete the last node and update tail to the second-last node.

    Time Complexity: O(N) (traverses to the second-last node)
    Space Complexity: O(1) (only uses a temporary pointer)
*/
void delete_tail(Node*& head, Node*& tail) {
    if (head == NULL) {
        cout << "Deletion not possible (List is empty)" << endl;
        return;
    }

    // If only one node exists
    if (head == tail) {
        delete head;
        head = NULL;
        tail = NULL;
        cout << "Tail node deleted, list is now empty" << endl;
        return;
    }

    Node* tmp = head;
    while (tmp->next != tail) {
        tmp = tmp->next;
    }

    delete tail;
    tail = tmp;
    tail->next = NULL;

    cout << "Tail node deleted" << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    cout << "Enter values (-1 to stop): " << endl;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    cout << "Linked List before deletion:" << endl;
    print_linked_list(head);

    cout << "Tail before deletion: " << (tail ? to_string(tail->val) : "NULL") << endl;

    delete_tail(head, tail);  // Deleting the tail node

    cout << "Linked List after deletion:" << endl;
    print_linked_list(head);

    cout << "Tail after deletion: " << (tail ? to_string(tail->val) : "NULL") << endl;

    return 0;
}
