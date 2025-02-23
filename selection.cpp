
#include <iostream>
using namespace std;
int main()
{
    int min, n = 5;

    int a[n] = {5, 4, 3, 2, 1};
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}
//
// #include <bits/stdc++.h>

// using namespace std;
// void selection_sort(int arr[], int n)
// {
//     // selection sort

//     cout << "After selection sort: "
//          << "\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
// }
// int main()
// {
//     int arr[] = {13, 46, 24, 52, 20, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Before selection sort: "
//          << "\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
//     selection_sort(arr, n);
//     return 0;
// }
// //