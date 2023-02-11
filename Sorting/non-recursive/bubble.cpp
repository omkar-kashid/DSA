#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n)
{
    int count = 0;
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
                count++;
            }
        if (count == 0)
            return;
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
    bubbleSort(arr, n);
    cout << endl
         << "After sort:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;

    return 0;
}