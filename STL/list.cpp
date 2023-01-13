#include <bits/stdc++.h>
using namespace std;
// List

int main()
{

    list<int> l1;
    l1.push_back(1);
    l1.emplace_back(2);
    l1.push_front(5); // not possible in vector
    l1.sort();
    for (auto it = l1.begin(); it != l1.end(); it++)
    {
        cout << *it << "    ";
    }

    return 0;
}
