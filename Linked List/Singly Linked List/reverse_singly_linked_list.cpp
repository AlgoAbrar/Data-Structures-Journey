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
    - Otherwise, insert the new node at the end and update the tail.

    Time Complexity: O(1) (constant time insertion)
    Space Complexity: O(1) (only one new node is allocated)
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
    Algorithm: reverse_linked_list
    - Reverses the linked list recursively by traversing to the end and then changing the direction of pointers.
    - Base case: When the next node is NULL, set the head to the last node.
    - Recursive step: Set the next node's next to the current node, and then set the current node's next to NULL.
    - The tail is also updated to the original head of the list.

    Time Complexity: O(N) (each node is visited once)
    Space Complexity: O(N) (due to recursion stack)
*/
void reverse_linked_list(Node*& head, Node*& tail, Node* tmp) {
    if (tmp == NULL) return;  // Base case if the list is empty
    
    if (tmp->next == NULL) {  // If we reached the last node
        head = tmp;
        tail = tmp;
        return;
    }

    reverse_linked_list(head, tail, tmp->next);  // Recursively reverse the rest of the list
    
    tmp->next->next = tmp;  // Change the next node's next to point to the current node
    tmp->next = NULL;       // Set the current node's next to NULL
}

/*
    Algorithm: print_linked_list
    - Traverses the entire list and prints each node's value.
    
    Time Complexity: O(N)
    Space Complexity: O(1)
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

    reverse_linked_list(head, tail, head);  // Reverse the linked list
    
    // Printing the reversed linked list's head and tail
    cout << "Reversed Linked List Head: " << head->val << endl;
    cout << "Reversed Linked List Tail: " << tail->val << endl;

    return 0;
}
