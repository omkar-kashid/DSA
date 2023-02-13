#include <bits/stdc++.h>
using namespace std;

int findPivotIndex(int *arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    int i = s;
    while (i <= e)
    {
        if (pivot > arr[i])
        {
            count++;
        }
        i++;
    }
    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);
    int left = s, right = e;
    while (left < pivotIndex && right > pivotIndex)
    {
        while (arr[left] < pivot)
        {
            left++;
        }
        while (arr[right] > pivot)
        {
            right--;
        }
        if (left < pivotIndex && right > pivotIndex)
            swap(arr[left++], arr[right--]);
    }
    return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{
    if (s >= e)
        return;
    int pivotIndex = findPivotIndex(arr, s, e);
    quickSort(arr, s, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, e);
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
    quickSort(arr, 0, n - 1);
    cout << endl
         << "After sort:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}