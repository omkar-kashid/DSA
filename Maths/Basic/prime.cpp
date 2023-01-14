#include <bits/stdc++.h>
using namespace std;
// Prime number by square root method time complexity : O(sqrt(num))
int main()
{

    int num, count = 0;
    cout << "Enter a number";
    cin >> num;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
            if (num / i != 1)
                count++;
        }
    }
    if (count == 2)
        cout << "True";
    else
        cout << "False";
    return 0;
}