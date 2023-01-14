#include <bits/stdc++.h>
using namespace std;
// printing name n times using recursion

void name(int i, int n)
{
    if (i > n)
        return;
    cout << "Omkar ";
    name(i + 1, n);
}

int main()
{

    int n;
    cout << "Enter a number:";
    cin >> n;
    name(1, n);
    return 0;
}