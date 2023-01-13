#include <bits/stdc++.h>
using namespace std;
// sets: sorted and unique

int main()
{

    set<int> s;
    s.insert(3);
    s.insert(1);
    auto it = s.find(3);
    cout << *it;
    int cnt = s.count(3);
    cout << cnt;
    return 0;
}