#include <bits/stdc++.h>
using namespace std;
// stack : it is a container
// push/ emplace, pop, top are main operations
int main()
{
    stack<int> s1;
    s1.push(2);
    s1.emplace(3);
    s1.pop();
    cout << s1.top();
    return 0;
}