#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    
    // Input array elements
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Sorting the array using bubble sort
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            // Swap if the element at index i is greater than element at index j
            if(a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }

    // Output the sorted array
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
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
1. Take input 'n' for the number of elements in the array.
2. Take input the elements of the array.
3. Use the Bubble Sort algorithm:
   a. Loop through the array and compare adjacent elements.
   b. If an element is greater than its adjacent element, swap them.
4. After sorting the array, print the elements in sorted order.

Time Complexity:
- The time complexity of the Bubble Sort algorithm is **O(n^2)**, where 'n' is the number of elements in the array.
  - The outer loop runs 'n' times and the inner loop runs up to 'n' times in the worst case.

Space Complexity:
- The space complexity is **O(n)**, where 'n' is the number of elements in the array, because an extra array of size 'n' is used to store the input values.
- The space complexity is constant in terms of the algorithm since we are sorting the array in-place without any additional complex data structures.
*/
