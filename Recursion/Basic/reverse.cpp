#include <bits/stdc++.h>
using namespace std;
// reverse array without recursion

// int main()
// {
//     int n;
//     cout << "Enter size of a array:";
//     cin >> n;
//     int arr[n];
//     cout << "Enter array elements:";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0, j = n - 1; i < n / 2; i++, j--)
//     {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// reverse array using recursion

// void Swap(int left, int arr[], int right)
// {
//     if (left >= right)
//         return;
//     swap(arr[left], arr[right]);
//     Swap(left + 1, arr, right - 1);
// }
// int main()
// {

//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     Swap(0, arr, n - 1);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// reverse using recursion method 2:

void Swap(int i, int arr[], int n)
{
    if (i >= n - i - 1)
        return;
    swap(arr[i], arr[n - i - 1]);
    Swap(i + 1, arr, n);
}
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Swap(0, arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}