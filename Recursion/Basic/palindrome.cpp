#include <bits/stdc++.h>
using namespace std;
// check string palindrome or not
bool check(int i, string &s)
{
    int n = s.size();
    if (i >= n / 2)
        return 1;
    if (s[i] != s[n - i - 1])
        return 0;
    return check(i + 1, s);
}
int main()
{
    string s;
    cin >> s;
    cout << check(0, s);
}