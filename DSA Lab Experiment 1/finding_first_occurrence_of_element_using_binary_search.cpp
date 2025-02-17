#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(int arr[], int n, int target)
{
    int left = 0, right = n - 1;
    int result = -1;

    while (left <= right)
    {
        int mid = (left +right) / 2;

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

int main()
{
    int n, target;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> target;

    int index = firstOccurrence(arr, n, target);

    if (index != -1)
    {
        cout << "First occurrence of " << target << " is at index: " << index << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
