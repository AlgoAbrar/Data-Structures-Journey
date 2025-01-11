/* Saiyedul Abrar
2nd year CSE Student, BAUET, Qadirabad, Natore, Bangladesh*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n]; // 2D array of size n x n
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i][i]; // Input only diagonal elements
    }
    
    return 0;
}
