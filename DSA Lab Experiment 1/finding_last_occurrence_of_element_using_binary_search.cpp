#include <bits/stdc++.h>
using namespace std;

int lastOccurrence(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    int result = -1; // Stores the index of last occurrence

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid; // Update result (potential last occurrence)
            left = mid + 1; // Continue searching in the right half
        } 
        else if (arr[mid] < target) {
            left = mid + 1; // Search in right half
        } 
        else {
            right = mid - 1; // Search in left half
        }
    }
    return result; // Return the last occurrence index or -1 if not found
}

int main() {
    int n, target;

    // Taking input for the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Creating an array of size n

    // Taking input for the sorted array
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Taking input for the target element
    cout << "Enter the element to search: ";
    cin >> target;

    // Finding the last occurrence
    int index = lastOccurrence(arr, n, target);

    // Output the result
    if (index != -1) {
        cout << "Last occurrence of " << target << " is at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
