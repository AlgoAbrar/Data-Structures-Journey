#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    int n;
    cin >> n;  // Input the number of elements to be pushed.
    
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;  // Input the value to be pushed.
        st.push(val);
    }

    while(!st.empty())
    {
        cout << st.top() << endl;  // Output the top element.
        st.pop();  // Pop the top element.
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
1. The program first inputs a number `n` (number of elements to push onto the stack).
2. It then pushes `n` elements into the stack.
3. Once the stack is populated, the program starts popping the elements from the stack and prints them in LIFO (Last In, First Out) order.

Time Complexity:
- Push operation: O(1) for each element.
- Pop operation: O(1) for each element.
- Top operation: O(1) for each element.

Space Complexity:
- O(n), where n is the number of elements pushed onto the stack.

*/
