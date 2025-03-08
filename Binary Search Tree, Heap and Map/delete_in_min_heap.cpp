#include<bits/stdc++.h>
using namespace std;

// Function to insert an element into the min-heap
void insert_heap(vector<int> &v, int val)
{
    v.push_back(val);  // Add the new element at the end
    int cur_idx = v.size()-1;

    // Fix the heap property by moving the new element up
    while(cur_idx != 0)
    {
        int par_idx = (cur_idx-1)/2;
        
        // If the new element is smaller than its parent, swap them
        if(v[par_idx] > v[cur_idx])
            swap(v[par_idx],v[cur_idx]);
        else
            break;
        
        // Update the current index to the parent's index
        cur_idx = par_idx;
    }
}

// Function to print the heap
void print_heap(vector<int> v)
{
    for(int x : v)
        cout << x << " ";  // Print each element of the heap
    cout << endl;
}

// Function to delete the root element (minimum) of the min-heap
void delete_heap(vector<int> &v)
{
    cout << v[0] << " Deleted. -> ";  // Print the deleted root value
    v[0] = v.back();  // Replace the root with the last element
    v.pop_back();  // Remove the last element

    int cur_idx = 0;
    while(true)
    {
        int left_idx = cur_idx * 2 + 1;
        int right_idx = cur_idx * 2 + 2;

        int left_val = INT_MAX, right_val = INT_MAX;
        if(left_idx < v.size())
            left_val = v[left_idx];
        if(right_idx < v.size())
            right_val = v[right_idx];
        
        // If left child is smaller and smaller than the current node, swap
        if(left_val <= right_val && left_val < v[cur_idx])
        {
            swap(v[left_idx], v[cur_idx]);
            cur_idx = left_idx;
        }
        // If right child is smaller and smaller than the current node, swap
        else if(right_val < left_val && right_val < v[cur_idx])
        {
            swap(v[right_idx], v[cur_idx]);
            cur_idx = right_idx;
        }
        else
            break;  // Stop when the heap property is satisfied
    }
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;

    // Insert elements into the heap
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_heap(v, val);
    }

    // Print the heap after each operation
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);
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
1. **insert_heap**: Insert a new value into the min-heap.
   - Push the new value to the back of the vector.
   - Move the new value up to maintain the min-heap property by comparing it with its parent and swapping if necessary.
   
2. **delete_heap**: Delete the root (minimum) element from the heap.
   - Replace the root with the last element.
   - Reorganize the heap by moving the root down to maintain the min-heap property, comparing it with its children and swapping when necessary.

3. **print_heap**: Print the current elements of the heap.

Time Complexity:
- **insert_heap**: O(log n), where 'n' is the number of elements in the heap. Inserting an element may require up to log n comparisons and swaps while moving up.
- **delete_heap**: O(log n), where 'n' is the number of elements in the heap. Deleting the root involves moving the last element down the heap, which may require log n comparisons and swaps.
- **print_heap**: O(n), where 'n' is the number of elements in the heap, as it requires printing each element.

Space Complexity:
- The space complexity is **O(n)**, where 'n' is the number of elements in the heap, because we store the heap in a vector. The additional space is for the recursion stack in the `delete_heap` function.
*/ 
