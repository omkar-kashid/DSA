#include <bits/stdc++.h>
using namespace std;

int main()
{

    // pairs

    pair<int, int> p1 = {2, 4};
    cout << p1.first << endl;
    cout << p1.second << endl;

    // nested pairs

    pair<pair<int, int>, int> p2 = {{3, 5}, 9};
    cout << p2.first.second << endl;
    cout << p2.second << endl;

    // pair array

    pair<int, int> arr[] = {{1, 2}, {2, 3}, {4, 5}, {6, 7}};
    cout << arr[1].first;
    return 0;
}
