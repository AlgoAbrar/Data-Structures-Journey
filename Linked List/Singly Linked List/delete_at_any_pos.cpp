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

    Time Complexity: O(1) (since insertion at the tail is constant time)
    Space Complexity: O(1) (only a new node is allocated)
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
    Space Complexity: O(1) (uses a pointer variable for traversal)
*/
void print_linked_list(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

/*
    Algorithm: delete_tail
    - Traverse the list to find the second last node.
    - Remove the last node by updating the second last node’s next pointer to NULL.
    - Delete the last node to free memory.

    Time Complexity: O(N) (traverses the list to find the second last node)
    Space Complexity: O(1) (uses only a few extra pointers)
*/
void delete_tail(Node* head) {
    if (head == NULL || head->next == NULL) {
        cout << "Deletion not possible (list is empty or has only one node)" << endl;
        return;
    }
    Node* tmp = head;
    while (tmp->next->next != NULL) {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = NULL;
    delete deleteNode;
    cout << "Tail node deleted" << endl;
}

/*
    Algorithm: delete_at_any_pos
    - Traverse the list to reach the node just before the given index.
    - Update the pointer to skip the node at index and delete it.

    Time Complexity: O(N) (traverses up to the given index)
    Space Complexity: O(1) (uses only extra pointer variables)
*/
void delete_at_any_pos(Node* head, int idx) {
    if (head == NULL || head->next == NULL) {
        cout << "Deletion not possible" << endl;
        return;
    }
    Node* tmp = head;
    for (int i = 0; i < idx - 1; i++) {
        if (tmp->next == NULL) {
            cout << "Invalid index" << endl;
            return;
        }
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    if (deleteNode == NULL) {
        cout << "Invalid index" << endl;
        return;
    }
    tmp->next = tmp->next->next;
    delete deleteNode;
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

    cout << "Original Linked List:" << endl;
    print_linked_list(head);

    delete_tail(head);
    cout << "After Deleting Tail:" << endl;
    print_linked_list(head);

    return 0;
}
