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

void delete_at_tail(Node* &head, Node* &tail)
{
    Node* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if(tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
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

    delete_at_tail(head,tail);  // Deleting the last node (tail)
    print_forward(head);  // Should print "10 20" (tail node has been removed)
    
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
1. The delete_at_tail function deletes the last node (tail) of the doubly linked list.
2. The tail pointer is updated to the previous node of the current tail.
3. If the list becomes empty after deletion, both head and tail are set to NULL.
4. Otherwise, the next pointer of the new tail is set to NULL.
5. The deleted node is then freed from memory.

Time Complexity:
- O(1): Deleting the tail node involves constant time operations, regardless of the list's size.
- The operations (updating pointers, checking conditions, and deleting the node) take constant time.

Space Complexity:
- O(1): No additional space is used, as we are only modifying pointers and deleting nodes in place. The function doesn't require extra space that scales with input size.
*/
