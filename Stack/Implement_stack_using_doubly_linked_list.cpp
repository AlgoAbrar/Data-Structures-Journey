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

class myStack
{
    public:
        
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

        void push(int val)       // O(1)
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
        void pop()           // O(1)
        {
            sz--;
            Node* deletenode = tail;
            tail = tail->prev;
            delete deletenode;
            if(tail == NULL)
            {
                head = NULL;
                return;
            }
            tail->next = NULL;
        }
        int top()        // O(1)
        {
            return tail->val;
        }
        int size()       // O(1)
        {
            return sz;
        }
        bool empty()      // O(1)
        {
            return head == NULL;
        }
};

int main()
{
    myStack st;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while(!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
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
1. `push`: Adds a new node with the given value at the end of the doubly linked list (tail). If the stack is empty, both the head and tail pointers are set to the new node.
2. `pop`: Removes the node from the end of the stack (tail). Updates the tail pointer to the previous node, and if the stack becomes empty, the head is also set to NULL.
3. `top`: Returns the value stored in the node at the tail of the stack.
4. `size`: Returns the current size of the stack by accessing the `sz` variable.
5. `empty`: Checks if the stack is empty by comparing the `head` pointer to NULL.

Time Complexity:
- `push`: O(1), inserting an element at the end of the doubly linked list takes constant time.
- `pop`: O(1), removing the last element of the doubly linked list takes constant time.
- `top`: O(1), accessing the value at the tail node takes constant time.
- `size`: O(1), accessing the size variable takes constant time.
- `empty`: O(1), checking if the stack is empty takes constant time.

Space Complexity:
- O(n), where n is the number of elements in the stack, since the stack uses a doubly linked list to store each element, and each node requires additional memory for the `next` and `prev` pointers.
*/
