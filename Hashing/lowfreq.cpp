#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 1, 2, 3, 4, 5, 4, 5, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int min_count = INT_MAX;
    int min_elem;
    for (auto it : freq)
    {
        if (it.second < min_count)
        {
            min_count = it.second;
            min_elem = it.first;
        }
    }

    cout << "The element with the lowest frequency is: " << min_elem << " Occured " << min_count << " times" << endl;
    return 0;
}
