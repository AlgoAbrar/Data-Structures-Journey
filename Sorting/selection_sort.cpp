#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n]; // Declare an array of size `n`
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Implement Selection Sort
    for (int i = 0; i < n - 1; i++) // Loop through each element except the last
    {
        int minIndex = i; //Assume the current element is the minimum
        for (int j = i + 1; j < n; j++) //Loop through the unsorted portion
        {
            if (a[j] < a[minIndex]) //Find the smallest element
            {
                minIndex = j; //Update the index of the smallest element
            }
        }
        // Swap the smallest element with the current element
        swap(a[i], a[minIndex]);
    }

    //Output the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " "; // Print each element of the sorted array
    }
    return 0;
}
