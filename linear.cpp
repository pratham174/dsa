#include <iostream>
using namespace std;
int search(int *a, int n, int num)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            return i;
            // break;
        }
    }
    return 100;
}
int main()
{
    int num = 4;
    // int n = sizeof(arr)/sizeof(arr[0]);
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    search(arr, n, num);
    return 0;
}