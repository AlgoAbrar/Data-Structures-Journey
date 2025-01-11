/* Saiyedul Abrar
2nd year CSE Student, BAUET, Qadirabad, Natore, Bangladesh*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // First loop: iterates over odd numbers from 1 to n
    // Time complexity: O(n/2) which simplifies to O(n)
    for(int i = 1; i <= n; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;

    // Second loop: iterates over all numbers from 1 to n
    // Time complexity: O(n)
    for(int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }

    // Overall time complexity: O(n) + O(n) = O(n)
    return 0;
}
