#include <bits/stdc++.h>
using namespace std;
// maps: key, value

int main()
{

    map<int, string> m1;
    m1.emplace(1, "omkar");
    m1.emplace(3, "dsa");
    cout << m1[1] << endl;

    for (auto it : m1)
    {
        cout << it.first << "   " << it.second << endl;
    }

    return 0;
}