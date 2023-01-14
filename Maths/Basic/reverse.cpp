#include <bits/stdc++.h>
using namespace std;
// find reverse of a number
int main()
{

    int num, digit = 0, rev = 0;
    cout << "Enter a number:";
    cin >> num;

    while (num)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    cout << endl
         << rev;
    return 0;
}