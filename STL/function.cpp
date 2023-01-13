#include <bits/stdc++.h>
using namespace std;
// some important fuctions:

int main()
{

    vector<int> v(5, 100);
    v.push_back(89);
    v.push_back(490);
    v.push_back(88);
    for (auto it : v)
    {
        cout << it << endl;
    }
    auto a = v.begin();
    sort(a, a + 6, greater<int>);
    cout << endl;
    for (auto it : v)
    {
        cout << it << endl;
    }

    return 0;
}