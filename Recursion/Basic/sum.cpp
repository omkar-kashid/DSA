#include <bits/stdc++.h>
using namespace std;
// print sum of n numbers using recursion

void sum(int i, int sm)
{
    if (i < 1)
    {
        cout << sm;
        return;
    }
    sum(i - 1, sm + i);
}

int main()
{

    int n;
    cout << "Enter a number";
    cin >> n;
    sum(n, 0);
    return 0;
}