#include <bits/stdc++.h>
using namespace std;
// printing  n to 1 using recursion and backtracking

void num(int i, int n)
{
    if (i > n)
        return;

    num(i + 1, n);
    cout << i << " ";
}

int main()
{

    int n;
    cout << "Enter a number:";
    cin >> n;
    num(1, n);
    return 0;
}