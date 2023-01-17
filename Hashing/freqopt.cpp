<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
// find frequency of each element in array using map TC: O(n)
void freq(int n, int arr[])
{
    map<int, int> fr;
    for (int i = 0; i < n; i++)
    {
        fr[arr[i]]++;
    }
    for (auto it : fr)
    {
        cout << it.first << " " << it.second << endl;
    }
}
int main()
{
    int arr[] = {2, 5, 6, 2, 6, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    freq(n, arr);
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
// find frequency of each element in array using map TC: O(n)
void freq(int n, int arr[])
{
    map<int, int> fr;
    for (int i = 0; i < n; i++)
    {
        fr[arr[i]]++;
    }
    for (auto it : fr)
    {
        cout << it.first << " " << it.second << endl;
    }
}
int main()
{
    int arr[] = {2, 5, 6, 2, 6, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    freq(n, arr);
    return 0;
>>>>>>> a1d47a21bea96e507f8a4d0761ec590dc749742a
}