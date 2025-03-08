#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    int n;
    cin >> n;
    
    // Step 1: Read 'n' values from the user and push them into the queue
    for(int i=0;i<n;i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    
    // Step 2: Pop elements from the queue and print them until it's empty
    while(!q.empty())
    {
        cout << q.front() << endl; // Print the front element of the queue
        q.pop(); // Remove the front element
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
1. **Push Elements into the Queue:**
   - The user inputs 'n' integer values.
   - Each value is pushed into the queue one by one using the `push()` method.

2. **Pop Elements from the Queue:**
   - We use a while loop to check if the queue is empty.
   - The `front()` method is used to access and print the element at the front of the queue.
   - The `pop()` method is then used to remove the front element after printing it.

Time Complexity:
- **Push Operations:** Each `push()` operation is O(1). So, for 'n' elements, the push operations take O(n).
- **Pop Operations:** Each `pop()` operation is also O(1). In the worst case, the program performs 'n' pop operations, which takes O(n).
- Therefore, the total time complexity is **O(n)**, where 'n' is the number of elements in the queue.

Space Complexity:
- The space complexity is **O(n)**, where 'n' is the number of elements in the queue, as the queue stores these elements.
*/
