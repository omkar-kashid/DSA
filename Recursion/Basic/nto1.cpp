#include <bits/stdc++.h>
using namespace std;
// printing  n to 1 using recursion

void num(int i)
{
    if (i < 1)
        return;
    cout << i << " ";
    num(i - 1);
}

int main()
{

    int n;
    cout << "Enter a number:";
    cin >> n;
    num(n);
    return 0;
}