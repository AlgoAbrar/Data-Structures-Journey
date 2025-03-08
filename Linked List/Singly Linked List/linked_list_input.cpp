// Name: Saiyedul Abrar
// ID: 0812320205101022
// Dept. of Computer Science and Engineering,
// Bangladesh Army University of Engineering & Technology
// Qadirabad Cantonment, Natore, Bangladesh
// Contact: saiyedul.abrar1430@gmail.com, +8801533713957

#include<bits/stdc++.h>
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
    - If the list is empty (head == NULL), set both head and tail to the new node.
    - If the list is not empty, set the last node's next pointer to the new node and update tail.

    Time Complexity: O(1) for insertion at the tail (since we're directly adding at the tail).
    Space Complexity: O(1) for adding one node.
*/
void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {  // If the list is empty
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

/*
    Algorithm: print_linked_list
    - Traverse the entire list and print each node's value.
    
    Time Complexity: O(N) (since we traverse the entire list)
    Space Complexity: O(1) (only a pointer is used for traversal)
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
    Node* tail = NULL;

    int val;
    while (true) {
        cin >> val;
        if (val == -1) {  // Exit condition
            break;
        }
        insert_at_tail(head, tail, val);  // Insert values at the tail
    }
    
    print_linked_list(head);  // Print the linked list
    return 0;
}
