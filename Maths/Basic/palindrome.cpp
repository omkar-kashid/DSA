#include <bits/stdc++.h>
using namespace std;
// check palindrome
int main()
{

    int num, digit = 0, rev = 0, dup;
    cout << "Enter a number:";
    cin >> num;
    dup = num;
    while (num)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    if (dup == rev)
    {
        cout << "Palindrome";
    }
    else
        cout << "Not Palindrome";
    return 0;
}