#include <bits/stdc++.h>
using namespace std;
//bismillah
int firsto(int arr[], int n, int target)
{
    int left = 0, right = n - 1, result = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            result = mid;
            right = mid - 1;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return result;
}

int lasto(int arr[], int n, int target)
{
    int left = 0, right = n - 1, result = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            result = mid;
            left = mid + 1;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return result;
}

int freq(int arr[], int n, int target)
{
    int first = firsto(arr, n, target);
    int last = lasto(arr, n, target);

    if (first == -1)
        return 0;

    return (last - first + 1);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    while (i < n)
    {
        int target = arr[i];
        int frequ = freq(arr, n, target);
        cout << target << " " << frequ << endl; 
        i = i + frequ;
    }
    return 0;
    //alhamdulillah
}

/*
Name: Saiyedul Abrar
ID: 0812320205101022
Dept. of Computer Science and Engineering,
Bangladesh Army University of Engineering & Technology,
Qadirabad Cantonment, Natore, Bangladesh
Contact: saiyedul.abrar1430@gmail.com, +8801533713957

Algorithm Explanation:
1. The program finds the frequency of each distinct element in a sorted array.
2. The `firsto` function finds the first occurrence of `target` using binary search.
3. The `lasto` function finds the last occurrence of `target` using binary search.
4. The `freq` function calculates the frequency as `last - first + 1`.
5. In `main`, the program reads an array, iterates through it, and prints the frequency of each distinct element.

Time Complexity:
- Binary Search for first and last occurrence: O(log n)
- Iterating through distinct elements: O(n)
- Overall Complexity: O(n log n) in the worst case.

Space Complexity:
- O(1) (constant extra space used).
*/
