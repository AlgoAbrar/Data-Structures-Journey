#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void delete_at_head(Node* &head, Node* &tail)
{
    if(head == NULL) return;  // Edge case if the list is empty

    Node* deleteNode = head;
    head = head->next;

    // If list becomes empty after deletion
    if (head == NULL) {
        tail = NULL;  // Tail is also NULL if the list is empty
    } else {
        head->prev = NULL;  // Set the new head's prev pointer to NULL
    }

    delete deleteNode;  // Free memory of the deleted node
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    delete_at_head(head,tail);  // Deleting the first node
    delete_at_head(head,tail);  // Deleting the second node

    print_forward(head);  // Should print "30" (tail node now)
    
    return 0;
}

/*
Name: Saiyedul Abrar
ID: 0812320205101022
Dept. of Computer Science and Engineering,
Bangladesh Army University of Engineering & Technology,
Qadirabad Cantonment, Natore, Bangladesh
Contact: saiyedul.abrar1430@gmail.com, +8801533713957

Algorithm:
1. The delete_at_head function deletes the first node (head) of the doubly linked list.
2. If the list is empty, the function returns early.
3. The head pointer is updated to the next node of the current head.
4. If the list becomes empty after the deletion, both head and tail are set to NULL.
5. Otherwise, the new head's prev pointer is set to NULL.
6. The deleted node is then freed from memory.

Time Complexity:
- O(1): Deleting the head node involves constant time operations, regardless of the list's size.
- The operations (updating pointers, checking conditions, and deleting the node) take constant time.

Space Complexity:
- O(1): No additional space is used, as we are only modifying pointers and deleting nodes in place. The function doesn't require extra space that scales with input size.
*/
