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
    Algorithm: insert_at_any_pos
    - Create a new node with the given value.
    - Traverse to the (idx-1)th node.
    - Insert the new node at position `idx` by adjusting pointers.

    Edge Cases Handled:
    - If `idx == 0`, insert at the head.
    - If `idx` is beyond the list size, print an error.

    Time Complexity: O(N) (traversing up to index `idx`)
    Space Complexity: O(1) (only one new node is allocated)
*/
void insert_at_any_pos(Node*& head, int idx, int val) {
    Node* newnode = new Node(val);

    if (idx == 0) {  // Insert at head
        newnode->next = head;
        head = newnode;
        return;
    }

    Node* tmp = head;
    for (int i = 1; i < idx; i++) {
        if (tmp == NULL || tmp->next == NULL) {  // Out of bounds check
            cout << "Index out of range!" << endl;
            delete newnode;
            return;
        }
        tmp = tmp->next;
    }

    newnode->next = tmp->next;
    tmp->next = newnode;
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

int main() {
    // Creating a sample linked list: 10 -> 20 -> 30
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    head->next = a;
    a->next = b;

    cout << "Before insertion: ";
    print_linked_list(head);

    insert_at_any_pos(head, 2, 100);  // Insert 100 at index 2
    insert_at_any_pos(head, 2, 200);  // Insert 200 at index 2

    cout << "After insertion: ";
    print_linked_list(head);

    return 0;
}
