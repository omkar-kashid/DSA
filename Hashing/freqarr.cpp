<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
// count frequency of each element in array
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<bool> check(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (check[i] == 1)
            continue;
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                check[j] = 1;
            }
        }
        cout << arr[i] << ": " << count << endl;
    }

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
// count frequency of each element in array
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<bool> check(n, 0);

    for (int i = 0; i < n; i++)
    {
        if (check[i] == 1)
            continue;
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                check[j] = 1;
            }
        }
        cout << arr[i] << ": " << count << endl;
    }

    return 0;
>>>>>>> a1d47a21bea96e507f8a4d0761ec590dc749742a
}