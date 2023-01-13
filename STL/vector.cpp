#include <bits/stdc++.h>
using namespace std;
// Vector:
// Array can store data in fixed size to overcome that problem we use vector which is of variable size
int main()
{

    vector<int> v1; // declaration

    v1.push_back(1); // adds 1 to v1

    v1.emplace_back(2); // adds 2 to v1 but faster

    cout << v1[0] << "  " << v1[1] << endl;

    vector<pair<int, int>> pvec; // pair vector

    pvec.push_back({2, 4});

    vector<int> v2(5, 100); // initializes with all 100 of 5 size

    for (auto it = v2.begin(); it != v2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl
         << v1.back() << endl;

    cout << v2[0] << "  " << v2[1] << endl;

    vector<int> v3(v1); // copy v1 into v2

    cout << v3[0] << endl;

    // erase

    v2[0] = 200;

    v2.erase(v2.begin(), v2.end() - 1);

    v2.insert(v2.begin(), 13);

    v2.insert(v2.begin() + 1, 2, 14);

    for (auto it = v2.begin(); it != v2.end(); it++)
    {
        cout << *it << " ";
    }

    cout << v2.size() << endl;
    cout << v2.capacity() << endl;
    v2.pop_back();
    v1.swap(v2);
    v2.clear();
    cout << v2.empty();

    return 0;
}
