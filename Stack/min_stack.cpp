#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<int> st, min_st;

    MinStack() {
        // Constructor to initialize the stack.
    }

    void push(int val) {
        st.push(val);
        // Push the current value onto the min stack if it is smaller than or equal to the current minimum.
        if(min_st.empty())
            min_st.push(val);
        else if(min_st.top() >= val)
            min_st.push(val);
    }

    void pop() {
        // If the value being popped is the minimum, also pop from the min stack.
        if(st.top() == min_st.top())
            min_st.pop();
        st.pop();
    }

    int top() {
        // Return the top value of the main stack.
        return st.top();
    }

    int getMin() {
        // Return the minimum value from the min stack.
        return min_st.top();
    }
};

int main() {
    MinStack obj;
    obj.push(5);
    obj.push(3);
    obj.push(8);
    obj.push(1);

    cout << "Top: " << obj.top() << endl;  // Output: 1
    cout << "Min: " << obj.getMin() << endl; // Output: 1

    obj.pop();
    cout << "Top after pop: " << obj.top() << endl; // Output: 8
    cout << "Min after pop: " << obj.getMin() << endl; // Output: 3
    
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
1. The class `MinStack` uses two stacks:
    - `st` stores the elements.
    - `min_st` stores the minimum values.
2. Every time an element is pushed into `st`, if the element is smaller than or equal to the current minimum (top of `min_st`), it is also pushed into `min_st`.
3. When an element is popped, if it matches the current minimum (top of `min_st`), it is also popped from `min_st`.
4. The `getMin()` function returns the current minimum, which is the top element of `min_st`.

Time Complexity:
- Push operation: O(1)
- Pop operation: O(1)
- Top operation: O(1)
- getMin operation: O(1)

Space Complexity:
- O(n) where n is the number of elements in the stack because two stacks are used to store the elements and the minimum values.

*/
