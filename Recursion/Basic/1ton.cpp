#include <bits/stdc++.h>
using namespace std;
// printing  1 to n using recursion

void num(int i, int n)
{
    if (i > n)
        return;
    cout << i << " ";
    num(i + 1, n);
}

int main()
{

    int n;
    cout << "Enter a number:";
    cin >> n;
    num(1, n);
    return 0;
}