#include <bits/stdc++.h>
using namespace std;

// Function to find the first occurrence of target using Binary Search
int firstOccurrence(int arr[], int n, int target) {
    int left = 0, right = n - 1, result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            result = mid;
            right = mid - 1;  // Search in left half for first occurrence
        } 
        else if (arr[mid] < target) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }
    return result;
}

// Function to find the last occurrence of target using Binary Search
int lastOccurrence(int arr[], int n, int target) {
    int left = 0, right = n - 1, result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            result = mid;
            left = mid + 1;  // Search in right half for last occurrence
        } 
        else if (arr[mid] < target) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }
    return result;
}

// Function to find frequency of a number using Binary Search
int frequencyOfNumber(int arr[], int n, int target) {
    int first = firstOccurrence(arr, n, target);
    int last = lastOccurrence(arr, n, target);

    if (first == -1) return 0;  // Element not found

    return (last - first + 1);
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

    // Finding the frequency of the target element
    int frequency = frequencyOfNumber(arr, n, target);

    // Output the result
    cout << "Frequency of " << target << " is: " << frequency << endl;

    return 0;
}
