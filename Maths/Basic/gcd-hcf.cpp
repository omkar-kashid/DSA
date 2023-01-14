#include <bits/stdc++.h>
using namespace std;
// find gcd or hcf of numbers
int main()
{

    int num1, num2, gcd;
    cout << "Enter two numbers:";
    cin >> num1 >> num2;
    int mn = min(num1, num2);
    for (int i = mn; i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
            break;
        }
    }
    cout << gcd;
    return 0;
}