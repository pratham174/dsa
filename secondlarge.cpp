#include <iostream>
using namespace std;
int main()
{
    // method1

    int arr[] = {1, 2, 3, 4, 5};
    int largest = arr[0];
    int second = 1;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }
    cout << second;

    // method 2

    // int n = 7;
    // int arr[n]{1, 3, 34, 4, 6, 656, 5};
    // for (int i = 1; i < n; ++i)
    // {
    //     // Change '<' to '>' if you want to find the smallest element
    //     if (arr[0] < arr[i])
    //         arr[0] = arr[i];
    // }

    // cout << endl
    //      << "Largest element = " << arr[0];

    return 0;
}