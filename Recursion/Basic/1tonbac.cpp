#include <bits/stdc++.h>
using namespace std;
// printing  1 to n using recursion and backtracking

void num(int i)
{
    if (i < 1)
        return;

    num(i - 1);
    cout << i << " ";
}

int main()
{

    int n;
    cout << "Enter a number:";
    cin >> n;
    num(n);
    return 0;
}