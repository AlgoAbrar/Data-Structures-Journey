#include <bits/stdc++.h>
using namespace std;
//bismillah
class Node
{
public:
    int rollN;
    string name;
    Node *next;
    Node(int rollN, string name)
    {
        this->rollN = rollN;
        this->name = name;
        this->next = NULL;
    }
};

void create_list(Node *&head, Node *&tail, int rollN, string name)
{
    Node *newNode = new Node(rollN, name);
    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }
    
    if (rollN < head->rollN) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *p = head;
    while (p->next != NULL && p->next->rollN < rollN) {
        p = p->next;
    }

    newNode->next = p->next;
    p->next = newNode;
    if (newNode->next == NULL) {
        tail = newNode;
    }
}

void print_list(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->rollN << " " << p->name << endl;
        p = p->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cin >> n;

    int rollN;
    string name;
    while (n--)
    {
        cin >> rollN >> name;
        create_list(head, tail, rollN, name);
    }

    cin >> rollN >> name;
    create_list(head, tail, rollN, name);

    print_list(head);

    return 0;
    //alhamdulillah
}

/*
Name: Saiyedul Abrar
ID: 0812320205101022
Dept. of Computer Science and Engineering,
Bangladesh Army University of Engineering & Technology,
Qadirabad Cantonment, Natore, Bangladesh
Contact: saiyedul.abrar1430@gmail.com, +8801533713957

Algorithm Explanation:
1. The program defines a linked list where each node stores a student's roll number and name.
2. The `create_list` function inserts nodes in sorted order based on roll number.
   - If the list is empty, the new node becomes the head.
   - If the new roll number is smaller than the head's roll number, it is inserted at the beginning.
   - Otherwise, it is inserted in its correct position to maintain order.
3. The `print_list` function traverses the linked list and prints the stored roll numbers and names.
4. In `main`, the program reads `n` student records, inserts them into the sorted linked list, and then inserts one more student record before printing the final list.

Time Complexity:
- Insertion: O(n) in the worst case (when inserting at the end of the list).
- Printing: O(n).
- Overall Complexity: O(n^2) for inserting `n` elements in the worst case.

Space Complexity:
- O(n) for storing `n` nodes.
*/
