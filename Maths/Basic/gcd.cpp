#include <bits/stdc++.h>
using namespace std;
// find gcd or hcf of numbers using euclidean algo
int main()
{

    int num1, num2;
    cout << "Enter two numbers:";
    cin >> num1 >> num2;
    while (num1 > 0 && num2 > 0)
    {
        if (num1 > num2)
            num1 = num1 % num2;
        else
            num2 = num2 % num1;
    }
    if (num1 == 0)
        cout << num2;
    else
        cout << num1;
    return 0;
}