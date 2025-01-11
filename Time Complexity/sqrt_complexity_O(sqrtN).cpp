/* Saiyedul Abrar
2nd year CSE Student, BAUET, Qadirabad, Natore, Bangladesh*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // Loop: iterates while i*i <= n
    // Time complexity: O(√n) because i is incremented by 1 and we only loop while i*i <= n
    for(int i = 1; i * i <= n; i++) 
    {
        if(n % i == 0) // Check if i is a divisor of n
        {
            cout << i << " " << n / i << " "; // Output the divisor and its complement
        }
    }

    return 0;
}
