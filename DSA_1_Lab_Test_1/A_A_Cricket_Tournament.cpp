#include <bits/stdc++.h>
using namespace std;
// bismillah
// using built in library function
int maxscore(int n, vector<int> &raya, vector<int> &sister)
{
    sort(raya.begin(), raya.end());
    sort(sister.begin(), sister.end(), greater<int>());

    int maxscores = 0;
    for (int i = 0; i < n; i++)
    {
        if (raya[i] > sister[i])
        {
            maxscores = maxscores + (raya[i] - sister[i]);
        }
    }

    return maxscores;
}

int main()
{
    int n;
    cin >> n;
    vector<int> raya(n), sister(n);

    for (int i = 0; i < n; i++)
        cin >> raya[i];
    for (int i = 0; i < n; i++)
        cin >> sister[i];

    cout << maxscore(n, raya, sister) << endl;
    return 0;
    // alhamdulillah

    // Name: Saiyedul Abrar
    // ID: 0812320205101022
    // Dept. of Computer Science and Engineering,
    // Bangladesh Army University of Engineering & Technology,
    // Qadirabad Cantonment, Natore, Bangladesh
    // Contact: saiyedul.abrar1430@gmail.com, +8801533713957

    // Algorithm:
    // 1. Sort the "raya" array in ascending order.
    // 2. Sort the "sister" array in descending order.
    // 3. Initialize the variable "maxscores" to store the score.
    // 4. Iterate through both arrays and if the element of "raya" is greater than "sister" at the same index,
    //    add the difference (raya[i] - sister[i]) to "maxscores".
    // 5. Return the value of "maxscores".
}
