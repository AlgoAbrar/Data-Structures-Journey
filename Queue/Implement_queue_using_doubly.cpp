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

class myQueue
{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

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
        newnode->prev = tail;
        tail = newnode;
    }
    void pop()         // O(1)
    {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }
    int front()         // O(1)
    {
        return head->val;
    }
    int back()          // O(1)
    {
        return tail->val;
    }
    int size()         // O(1)
    {
        return sz;
    }
    bool empty()       // O(1)
    {
        return head == NULL;
    }

};

int main()
{
    myQueue q;
    int n;
    cin >> n;  // Input the number of elements to push into the queue.
    for(int i=0;i<n;i++)
    {
        int val;
        cin >> val;  // Input the value to be pushed into the queue.
        q.push(val);
    }
    while(!q.empty())
    {
        cout << q.front() << endl;  // Output the front element of the queue.
        q.pop();  // Pop the front element from the queue.
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
1. The program first inputs a number `n` (number of elements to be pushed to the queue).
2. It then pushes `n` elements into the queue.
3. Once the queue is populated, the program starts popping the elements from the front of the queue and prints them in FIFO (First In, First Out) order.

Time Complexity:
- Push operation: O(1) for each element.
- Pop operation: O(1) for each element.
- Front operation: O(1) for each element.
- Back operation: O(1) for each element.

Space Complexity:
- O(n), where n is the number of elements pushed into the queue.

*/
