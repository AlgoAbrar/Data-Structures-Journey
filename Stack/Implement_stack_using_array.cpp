#include<bits/stdc++.h>
using namespace std;

class myStack
{
    public:
        vector<int> v;

        void push(int val)
        {
            v.push_back(val);
        }
        void pop()
        {
            v.pop_back();
        }
        int top()
        {
            return v.back();
        }
        int size()
        {
            return v.size();
        }
        bool empty()
        {
            return v.empty();
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
1. The `push` function adds an integer to the top of the stack by using the `push_back` function of the vector.
2. The `pop` function removes the top element from the stack using the `pop_back` function of the vector.
3. The `top` function returns the value at the top of the stack using the `back` function of the vector.
4. The `size` function returns the number of elements in the stack using the `size` function of the vector.
5. The `empty` function checks whether the stack is empty by using the `empty` function of the vector.

Time Complexity:
- `push`: O(1), adding an element to the end of the vector takes constant time.
- `pop`: O(1), removing an element from the end of the vector takes constant time.
- `top`: O(1), accessing the last element of the vector takes constant time.
- `size`: O(1), getting the size of the vector takes constant time.
- `empty`: O(1), checking if the vector is empty takes constant time.

Space Complexity:
- O(n), where n is the number of elements in the stack, since the vector stores all the elements.
*/
