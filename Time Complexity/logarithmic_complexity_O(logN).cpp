/* Saiyedul Abrar
2nd year CSE Student, BAUET, Qadirabad, Natore, Bangladesh*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // Loop: iterates while i >= 1, dividing i by 3 in each iteration
    // Time complexity: O(log3(n)) since i is divided by 3 in each iteration
    for(int i = n; i >= 1; i /= 3)
    {
        cout << i << endl;
    }

    // Overall time complexity: O(log3(n)) which is simplified to O(log(n))
    return 0;
}
