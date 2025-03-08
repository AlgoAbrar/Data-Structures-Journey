#include <bits/stdc++.h>
using namespace std;

queue<int> reverseQueue(queue<int> q)
{
    stack<int> st;

    // Step 1: Pop all elements from the queue and push them onto the stack
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    // Step 2: Pop all elements from the stack and push them back to the queue
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    return q; // Return the reversed queue
}

/*
Name: Saiyedul Abrar
ID: 0812320205101022
Dept. of Computer Science and Engineering,
Bangladesh Army University of Engineering & Technology,
Qadirabad Cantonment, Natore, Bangladesh
Contact: saiyedul.abrar1430@gmail.com, +8801533713957

Algorithm:
1. **Pop Elements from Queue:**
   - First, pop all elements from the given queue and push them onto a stack. This reverses the order of the elements in the stack.
   
2. **Push Elements Back to Queue:**
   - After that, pop elements from the stack and push them back into the queue. Since the stack operates in LIFO (Last In First Out) order, the elements are pushed back in reverse order.

3. **Return the Reversed Queue:**
   - The function then returns the queue, which is now reversed.

Time Complexity:
- **Pop Operations:** O(n), as each element is popped from the queue and pushed onto the stack.
- **Push Operations:** O(n), as each element is popped from the stack and pushed back to the queue.
- Therefore, the total time complexity is O(n), where n is the number of elements in the queue.

Space Complexity:
- **O(n),** where n is the number of elements in the queue. This is because a stack is used to store all the elements temporarily.
*/
