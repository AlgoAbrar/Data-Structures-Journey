#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp;
    mp["tamim"] = 2;         // logN
    mp["ramim"] = 500;
    mp["shamim"] = 50;

    // Loop through the map (commented out in the current code)
    // for(auto it = mp.begin(); it != mp.end(); it++)     // O(NlogN)
    // {
    //     cout << it->first << " " << it->second << endl;      // logN
    // }

    // Check if the key "hamim" exists in the map
    if(mp.count("hamim"))
    {
        cout << "Ache";
    }
    else    
        cout << "Nai";
    
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
1. Create a map `mp` with keys as strings and values as integers.
2. Insert key-value pairs into the map using the subscript operator.
3. Use the `count()` method of the map to check if a key ("hamim") exists in the map.
4. If the key exists, print "Ache". Otherwise, print "Nai".

Time Complexity:
- Inserting a key-value pair into the map: O(log N), where N is the number of elements in the map.
- Checking if a key exists using the `count()` method: O(log N) on average.
Thus, the overall time complexity for the operations is O(log N).

Space Complexity:
- The space complexity is O(N), where N is the number of elements in the map.

*/
