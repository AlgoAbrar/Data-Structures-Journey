#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; //Input the number of elements
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; //Input elements of the array
    }

    //Bubble Sort
    for (int i = 0; i < n - 1; i++) //Loop through all elements
    {
        for (int j = 0; j < n - i - 1; j++) //Inner loop for comparing elements
        {
            if (a[j] > a[j + 1]) //If the current element is greater than the next
            {
                swap(a[j], a[j + 1]); //Swap the elements
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " "; //Print each element of the sorted array
    }
    return 0;
}
