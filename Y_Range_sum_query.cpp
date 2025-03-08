#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin >> n >> q;
    vector<long long int> v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin >> v[i];
    }

    vector<long long int> pre(n+1);
    pre[1] = v[1];
    for(int i=2;i<=n;i++)
    {
        pre[i] = pre[i-1] + v[i];
    }

    while(q--)
    {
        int l,r;
        cin >> l >> r;
        long long int sum;
        if(l==1)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r]-pre[l-1];
        }
        cout << sum << endl;
    }
    return 0;
}

/*
Name: Saiyedul Abrar
ID: 0812320205101022
Dept. of Computer Science and Engineering,
Bangladesh Army University of Engineering & Technology,
Qadirabad Cantonment, Natore, Bangladesh
Contact: saiyedul.abrar1430@gmail.com, +8801533713957

Algorithm:
1. First, read two integers `n` (the size of the array) and `q` (the number of queries).
2. Then, read `n` integers into a vector `v` (1-indexed).
3. Construct a prefix sum array `pre` where `pre[i]` holds the sum of the first `i` elements of `v`.
    - `pre[1] = v[1]`
    - For `i > 1`, `pre[i] = pre[i-1] + v[i]`
4. For each query, read two integers `l` and `r`, and compute the sum of elements from index `l` to `r` using the prefix sum array.
    - If `l == 1`, the sum is simply `pre[r]`.
    - Otherwise, the sum is `pre[r] - pre[l-1]`.
5. Output the result for each query.

Time Complexity:
- Constructing the prefix sum array: O(N), where N is the size of the array.
- Processing each query: O(1), since the sum of the range is computed in constant time using the prefix sum array.
- Overall time complexity: O(N + Q), where N is the number of elements and Q is the number of queries.

Space Complexity:
- The space complexity is O(N) due to the space required to store the vector `v` and the prefix sum array `pre`.

*/
