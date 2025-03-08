#include<bits/stdc++.h>
using namespace std;

class myStack
{
    public:
        list<int> l;

        void push(int val)       // O(1)
        {
            l.push_back(val);
        }
        void pop()           // O(1)
        {
            l.pop_back();
        }
        int top()        // O(1)
        {
            return l.back();
        }
        int size()       // O(1)
        {
            return l.size();
        }
        bool empty()      // O(1)
        {
            return l.empty();
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
1. `push`: Adds a new element to the end of the list (acting as the top of the stack).
2. `pop`: Removes the element from the end of the list (acting as the top of the stack).
3. `top`: Returns the last element of the list (top of the stack).
4. `size`: Returns the current size of the stack by calling `size()` on the list.
5. `empty`: Checks if the list is empty by calling `empty()` on the list.

Time Complexity:
- `push`: O(1), adding an element to the end of the list takes constant time.
- `pop`: O(1), removing an element from the end of the list takes constant time.
- `top`: O(1), accessing the last element of the list takes constant time.
- `size`: O(1), retrieving the size of the list takes constant time.
- `empty`: O(1), checking if the list is empty takes constant time.

Space Complexity:
- O(n), where n is the number of elements in the stack, since the stack uses a doubly linked list (std::list) to store each element, which requires extra space for the pointers in the list nodes.
*/
