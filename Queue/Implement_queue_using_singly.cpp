#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myQueue
{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    // Function to push a value to the queue. Time complexity: O(1)
    // The push operation adds a new node at the end of the queue.
    void push(int val)      // O(1)
    {
        sz++;
        Node* newnode = new Node(val);
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }

    // Function to pop the front value of the queue. Time complexity: O(1)
    // The pop operation removes the front node from the queue.
    void pop()         // O(1)
    {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL)
        {
            tail = NULL;
        }
    }

    // Function to return the front value of the queue. Time complexity: O(1)
    int front()         // O(1)
    {
        return head->val;
    }

    // Function to return the back value of the queue. Time complexity: O(1)
    int back()          // O(1)
    {
        return tail->val;
    }

    // Function to return the size of the queue. Time complexity: O(1)
    int size()         // O(1)
    {
        return sz;
    }

    // Function to check if the queue is empty. Time complexity: O(1)
    bool empty()       // O(1)
    {
        return head == NULL;
    }
};

int main()
{
    // Create a queue object
    myQueue q;

    // Take the number of elements as input
    int n;
    cin >> n;

    // Push the values to the queue
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    // Pop all elements and print them
    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

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
1. **Push Operation:**
   - Create a new node with the value to be added.
   - If the queue is empty (head is NULL), make both head and tail point to the new node.
   - Otherwise, link the new node to the tail and make it the new tail of the queue.

2. **Pop Operation:**
   - Remove the front node by updating the head pointer to the next node.
   - If the queue becomes empty (head becomes NULL), reset the tail to NULL as well.

3. **Front Operation:**
   - Return the value at the head of the queue.

4. **Back Operation:**
   - Return the value at the tail of the queue.

5. **Size Operation:**
   - Return the size of the queue.

6. **Empty Operation:**
   - Check if the head is NULL to determine if the queue is empty.

Time Complexity:
- **Push Operation:** O(1), as we are adding an element at the end (tail) of the queue.
- **Pop Operation:** O(1), as we are removing the element from the front (head) of the queue.
- **Front Operation:** O(1), as we are directly accessing the head element.
- **Back Operation:** O(1), as we are directly accessing the tail element.
- **Size Operation:** O(1), as we maintain the size of the queue.
- **Empty Operation:** O(1), as we check if the head is NULL.

Space Complexity:
- **O(n),** where `n` is the number of elements in the queue, since we are using a linked list and the space is proportional to the number of nodes in the list.
*/
