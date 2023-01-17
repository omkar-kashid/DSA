<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
// find max frequency element in array using map TC: O(n)
void freq(int n, int arr[])
{
    unordered_map<int, int> fr;
    for (int i = 0; i < n; i++)
    {
        fr[arr[i]]++;
    }
    pair<int, int> cnt = {1, 1};
    for (auto it : fr)
    {
        if (it.second >= cnt.second)
        {
            cnt.first = it.first;
            cnt.second = it.second;
        }
    }
    cout << cnt.first << " " << cnt.second;
}
int main()
{
    int arr[] = {2, 6, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    freq(n, arr);
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
// find max frequency element in array using map TC: O(n)
void freq(int n, int arr[])
{
    unordered_map<int, int> fr;
    for (int i = 0; i < n; i++)
    {
        fr[arr[i]]++;
    }
    pair<int, int> cnt = {1, 1};
    for (auto it : fr)
    {
        if (it.second >= cnt.second)
        {
            cnt.first = it.first;
            cnt.second = it.second;
        }
    }
    cout << cnt.first << " " << cnt.second;
}
int main()
{
    int arr[] = {2, 6, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    freq(n, arr);
    return 0;
>>>>>>> a1d47a21bea96e507f8a4d0761ec590dc749742a
}