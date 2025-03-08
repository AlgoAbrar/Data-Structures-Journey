#include <bits/stdc++.h> 
using namespace std;

int getsum(stack<int> st)
{
    int sum = 0;
    while(!st.empty())         // O(n)
    {
        sum += st.top();
        st.pop();
    }
    return sum;                // O(1)
}

int maxSum(stack<int> &st1, stack<int> &st2, stack<int> &st3) {
    int sum1 = getsum(st1);    // O(n)
    int sum2 = getsum(st2);    // O(n)
    int sum3 = getsum(st3);    // O(n)

    while(true)                // O(n)
    {
        if(sum1 == sum2 && sum2 == sum3)
            break;
        if(sum1 >= sum2 && sum1 >= sum3)
        {
            sum1 -= st1.top();  // O(1)
            st1.pop();           // O(1)
        }
        else if(sum2 >= sum1 && sum2 >= sum3)
        {
            sum2 -= st2.top();  // O(1)
            st2.pop();           // O(1)
        }
        else
        {
            sum3 -= st3.top();  // O(1)
            st3.pop();           // O(1)
        }
    }
    return sum1;               // O(1)
}

int main() {
    stack<int> st1, st2, st3;
    st1.push(3);
    st1.push(2);
    st1.push(1);
    
    st2.push(4);
    st2.push(3);
    
    st3.push(5);
    st3.push(4);
    
    cout << "Maximum sum of equal stacks: " << maxSum(st1, st2, st3) << endl;
    
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
1. The function `getsum` calculates the sum of elements in a stack by popping all elements.
2. The function `maxSum` finds the maximum sum of three stacks where the sum of all stacks is equal. It compares the sums and removes elements from the stack with the largest sum.
3. It continues until all three stacks have equal sums and returns the equal sum.

Time Complexity:
- The function `getsum` is called for each of the three stacks and takes O(n) time where n is the size of the stack.
- The while loop compares the sums and performs stack operations (pop) which takes O(1) time per operation.
Thus, the overall time complexity is O(n) for summing and O(n) for adjusting the stacks, leading to a total time complexity of O(n).

Space Complexity:
- O(1) because no extra space is used apart from the input stacks.

*/
