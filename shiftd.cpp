#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int d = 3;
    int n = sizeof(arr) / sizeof(int);
    int temp[d] = {};
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    // for (int i = 0; i < d; i++)
    // {
    //     cout << temp[i];
    // }
    // to shift the places we shift the elements bu i-d place
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    // cout << n - d;
    int m = 0;
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[m];
        m++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}