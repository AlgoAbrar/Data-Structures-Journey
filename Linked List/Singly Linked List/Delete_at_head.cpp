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

    Time Complexity: O(1) (insertion at tail is constant time)
    Space Complexity: O(1) (only one new node is allocated)
*/
void insert_at_tail(Node* &head, Node* &tail, int val) {
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
    - Starts from the head and traverses through the linked list.
    - Prints each node’s value until it reaches NULL.

    Time Complexity: O(N) (traverses the entire list)
    Space Complexity: O(1) (uses only a pointer variable for traversal)
*/
void print_linked_list(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

/*
    Algorithm: delete_at_head
    - Checks if the list is empty. If yes, prints an error message.
    - Stores the head node in a temporary variable.
    - Moves the head pointer to the next node.
    - Deletes the original head node.

    Time Complexity: O(1) (deleting head is a constant time operation)
    Space Complexity: O(1) (only a temporary pointer is used)
*/
void delete_at_head(Node* &head) {
    if (head == NULL) {
        cout << "Deletion not possible (List is empty)" << endl;
        return;
    }
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << "Head node deleted" << endl;
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

    delete_at_head(head);
    cout << "After Deleting Head:" << endl;
    print_linked_list(head);

    return 0;
}
