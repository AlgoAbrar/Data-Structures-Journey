#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Create a priority queue with the smallest element at the top
    priority_queue<int, vector<int>, greater<int>> pq;

    // Push elements into the priority queue
    pq.push(10);
    pq.push(5);
    pq.push(30);

    // Print the top element (smallest element due to the 'greater' comparator)
    cout << pq.top() << endl; // Output: 5

    pq.push(2); // Push another element

    // Print the top element (smallest element due to the 'greater' comparator)
    cout << pq.top() << endl; // Output: 2

    // Pop the top element (smallest element)
    pq.pop();  // Pops 2
    pq.pop();  // Pops 5

    // Print the top element after two pops
    cout << pq.top() << endl; // Output: 10

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
1. **Priority Queue Creation:**
   - Create a priority queue using `priority_queue<int, vector<int>, greater<int>>` which ensures that the smallest element will be at the top.
   
2. **Push Operation:**
   - Elements are inserted into the priority queue. The priority queue automatically arranges elements so that the smallest element can be accessed at the top.

3. **Top Operation:**
   - The top operation gives the smallest element in the priority queue.

4. **Pop Operation:**
   - The pop operation removes the top element (the smallest element due to the `greater<int>` comparator).
   
5. **Final State:**
   - After popping the top two elements, the new top element is displayed.

Time Complexity:
- **Push Operation:** O(log n), where n is the number of elements in the priority queue. This is because the element needs to be inserted while maintaining the heap property.
- **Top Operation:** O(1), as we can directly access the smallest element at the top.
- **Pop Operation:** O(log n), as the heap property needs to be maintained after the removal of the top element.
  
Space Complexity:
- **O(n),** where n is the number of elements in the priority queue, as the space is proportional to the number of elements stored in the underlying container (vector).
*/
