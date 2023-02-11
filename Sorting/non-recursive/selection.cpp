#include <bits/stdc++.h>
using namespace std;

void selectionSort(int *arr, int n)
{
    for (int i = 0; i <= n; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Before sort:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    selectionSort(arr, n);

    cout << endl
         << "After sort:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}