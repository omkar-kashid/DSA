#include <bits/stdc++.h>
using namespace std;
// find no. of digits in a number
int main()
{

    int num, count = 0;
    cout << "Enter a number:";
    cin >> num;
    // count = (int)(log10(num) + 1);
    while (num)
    {
        count++;
        num = num / 10;
    } // time complexity: O(log10(num))
    cout << endl
         << count;
    return 0;
}