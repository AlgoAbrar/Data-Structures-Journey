/* Saiyedul Abrar
2nd year CSE Student, BAUET, Qadirabad, Natore, Bangladesh*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // Outer loop: iterates from 0 to n-1
    // Time complexity: O(n)
    for(int i = 0; i < n; i++)
    {
        // Inner loop: iterates from 0 to n-1
        // Time complexity: O(n)
        for(int j = 0; j < n; j++)
        {
            cout << "Hello" << endl;
        }
    }

    // Overall time complexity: O(n) * O(n) = O(n^2)
    return 0;
}
