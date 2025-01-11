/* Saiyedul Abrar
2nd year CSE Student, BAUET, Qadirabad, Natore, Bangladesh*/
#include<bits/stdc++.h>
using namespace std;
//bismillah
int main()
{
    int n;
    cin >> n;
    int sum = 0;

    // Using loop:
    // The loop runs from i = 1 to i = n, so it executes n times.
    // Time complexity: O(n)
     for(int i = 1; i <= n; i++)
     {
        sum += i;
    }

    // Using formula:
    // The formula is a constant-time operation, as it doesn't depend on the value of n.
    // Time complexity: O(1)
    sum = (n * (n + 1)) / 2;

    cout << sum << endl;
    return 0;
    //alhamdulillah
}
