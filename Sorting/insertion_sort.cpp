#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; //Input elements of the array
    }

    // Implement Insertion Sort
    for (int i = 1; i < n; i++) //Start from the second element
    {
        int key = a[i]; //Element to be inserted in the sorted portion
        int j = i - 1;

        //Move elements of the sorted portion that are greater than the key
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j]; //Shift element to the right
            j--;
        }
        a[j + 1] = key; //Insert the key at the correct position
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " "; //Print each element of the sorted array
    }
    return 0;
}
