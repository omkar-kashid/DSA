#include <bits/stdc++.h>
using namespace std;
// print all divisors
int main()
{

    int num;
    cout << "Enter a number:";
    cin >> num;
    vector<int> v;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            v.push_back(i);
            if (num / i != 1)
                v.push_back(num / i);
        }
    }
    sort(v.begin(), v.end());
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}