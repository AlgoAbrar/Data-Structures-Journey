/* Saiyedul Abrar
2nd year CSE Student, BAUET, Qadirabad, Natore, Bangladesh*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // Outer loop: iterates over all numbers from 1 to n
    // Time complexity: O(n)
    for(int i = 1; i <= n; i++)
    {
        // Inner loop: iterates by multiplying j by 2 in each iteration (logarithmic behavior)
        // Time complexity: O(log(n)) since j doubles in each iteration
        for(int j = 1; j <= n; j *= 2)
        {
            cout << "Hello" << endl;
        }
    }

    // Overall time complexity: O(n) * O(log(n)) = O(n log(n))
    return 0;
}
