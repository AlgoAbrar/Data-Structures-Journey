#include<bits/stdc++.h>
using namespace std;

class myQueue
{
    public:
    list<int> l;

    void push(int val)    // O(1)
    {
        l.push_back(val);  // Adds an element to the back of the list (queue).
    }
    void pop()         // O(1)
    {
        l.pop_front();    // Removes the element from the front of the list (queue).
    }
    int front()         // O(1)
    {
        return l.front();  // Returns the element at the front of the queue.
    }
    int back()          // O(1)
    {
        return l.back();  // Returns the element at the back of the queue.
    }
    int size()         // O(1)
    {
        return l.size();  // Returns the number of elements in the queue.
    }
    bool empty()       // O(1)
    {
        return l.empty();  // Returns whether the queue is empty or not.
    }

};

int main()
{
    myQueue q;
    int n;
    cin >> n;  // Input the number of elements to be pushed into the queue.
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
2. It then pushes `n` elements into the queue using a list.
3. Once the queue is populated, the program starts popping the elements from the front of the queue and prints them in FIFO (First In, First Out) order.

Time Complexity:
- Push operation: O(1) for each element.
- Pop operation: O(1) for each element.
- Front operation: O(1) for each element.
- Back operation: O(1) for each element.

Space Complexity:
- O(n), where n is the number of elements pushed into the queue. This space is used by the list to store the elements.

*/
