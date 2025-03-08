#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n); // Vector to hold the heap elements
    for(int i=0;i<n;i++) // Reading the elements into the vector
        cin >> v[i];
    
    int val;
    cin >> val; // Value to be inserted into the heap
    v.push_back(val); // Insert the new value at the end of the vector

    int cur_idx = v.size()-1; // Start from the last element in the vector
    // Perform heapify-up
    while(cur_idx != 0)
    {
        int par_idx = (cur_idx-1)/2; // Calculate the parent index
        if(v[par_idx] < v[cur_idx]) // If the current node is larger than the parent, swap them
            swap(v[par_idx],v[cur_idx]);
        else
            break; // If the heap property is satisfied, exit the loop
        cur_idx = par_idx; // Move up to the parent node
    }

    // Printing the elements of the heap
    for(int x : v)
        cout << x << " ";
    cout << endl;
    
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
1. Read an integer 'n' representing the number of elements.
2. Create a vector 'v' of size 'n' and read 'n' integers into the vector.
3. Read an integer 'val' to be inserted into the max-heap.
4. Add the value 'val' to the end of the vector (representing a max-heap).
5. Perform the "heapify-up" process to maintain the max-heap property.
6. Print the elements of the heap.

Time Complexity:
- Reading 'n' integers takes O(n).
- Inserting an element into a max-heap takes O(log n) (heapify-up operation).
- Printing the heap takes O(n).
Thus, the overall time complexity is O(n + log n).

Space Complexity:
- The space complexity is O(n) due to the vector storing the heap elements.

*/
