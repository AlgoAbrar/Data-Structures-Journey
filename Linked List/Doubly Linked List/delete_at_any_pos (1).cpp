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
    Node* prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

/*
    Algorithm: print_forward
    - Traverses the list from the head to the end and prints each node's value.
    
    Time Complexity: O(N)
    Space Complexity: O(1)
*/
void print_forward(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

/*
    Algorithm: delete_at_any_pos
    - Deletes a node at the given index in the doubly linked list.
    - It traverses to the given position, then updates the previous and next pointers of the surrounding nodes.
    
    Time Complexity: O(N) (due to traversal to the given position)
    Space Complexity: O(1)
*/
void delete_at_any_pos(Node* &head, int idx) {
    if (head == NULL) return;  // Edge case if the list is empty
    
    Node* tmp = head;
    for (int i = 1; tmp != NULL && i < idx; i++) {
        tmp = tmp->next;
    }

    if (tmp == NULL) return;  // If index is out of bounds

    // Case 1: If it's the head node
    if (tmp == head) {
        head = tmp->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete tmp;
        return;
    }

    // Case 2: If it's any other node
    if (tmp->next != NULL) {
        tmp->next->prev = tmp->prev;  // Update the prev pointer of the next node
    }
    tmp->prev->next = tmp->next;  // Update the next pointer of the previous node
    
    delete tmp;  // Delete the node
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    delete_at_any_pos(head, 1);  // Deleting the node at position 1
    print_forward(head);  // Should print the remaining list: 20 30
    return 0;
}
