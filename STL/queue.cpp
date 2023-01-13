#include <bits/stdc++.h>
using namespace std;
// queue: fifo
int main()
{
    queue<int> q1;
    q1.push(2);
    q1.emplace(3);
    cout << q1.back();
    return 0;
}