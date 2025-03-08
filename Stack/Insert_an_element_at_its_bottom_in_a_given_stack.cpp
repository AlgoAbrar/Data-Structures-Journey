#include <bits/stdc++.h> 
using namespace std;

stack<int> pushAtBottom(stack<int>& st, int x) 
{
    stack<int> new_st;
    while(!st.empty())         // O(n)
    {
        new_st.push(st.top());
        st.pop();
    }
    st.push(x);                // O(1)
    while(!new_st.empty())     // O(n)
    {
        st.push(new_st.top());
        new_st.pop();
    }
    return st;                 // O(1)
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    
    // Push an element at the bottom of the stack
    st = pushAtBottom(st, 5);

    // Print the stack after pushing at bottom
    while (!st.empty()) {
        cout << st.top() << " ";
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
1. The function `pushAtBottom` accepts a stack and an integer `x`.
2. It first transfers all the elements from the original stack to a temporary stack (`new_st`), effectively reversing the order of the elements.
3. It then pushes `x` onto the original stack (which is now empty).
4. Finally, it transfers all the elements back from `new_st` to the original stack, restoring the original order but with `x` at the bottom.

Time Complexity:
- `O(n)` for both while loops as we are transferring all elements from the stack to the temporary stack and vice versa.
- The push operation itself is `O(1)`.
Thus, the total time complexity is `O(n)`.

Space Complexity:
- `O(n)` because we use an additional stack (`new_st`) to store the elements temporarily.

*/
