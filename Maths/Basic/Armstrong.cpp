#include <bits/stdc++.h>
using namespace std;
// Check armstorng number
int main()
{

    int num, digit = 0, sum = 0, dup;
    cout << "Enter a number:";
    cin >> num;
    dup = num;
    while (num)
    {
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    if (sum == dup)
        cout << "True";
    else
        cout << "false";
    return 0;
}