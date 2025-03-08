#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin >> n >> q;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i=0;i<q;i++)
    {
        int val;
        cin >> val;
        int flag = 0;
        int l=0;
        int r=n-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(a[mid] == val)
            {
                flag = 1;
                break;
            }
            else if(a[mid] > val)
            {
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        if(flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
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
1. First, read the number of elements `n` and the number of queries `q`.
2. Create an array `a` of size `n` and read the `n` elements into it.
3. Sort the array `a` in ascending order.
4. For each query, read a value `val` and perform binary search to find whether `val` is present in the array:
    - Initialize two pointers `l` (left) and `r` (right).
    - Perform binary search by comparing the mid element `a[mid]` with `val`.
    - If `a[mid] == val`, set a flag to indicate that the element is found.
    - If the element is found, print "found". Otherwise, print "not found".
5. Output the result of each query.

Time Complexity:
- Sorting the array `a`: O(N log N), where N is the number of elements.
- For each query, performing binary search: O(log N).
- Overall time complexity: O(N log N + Q log N), where N is the number of elements and Q is the number of queries.

Space Complexity:
- The space complexity is O(N), due to the space required to store the array `a`.

*/