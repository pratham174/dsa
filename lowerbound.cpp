#include <iostream>
using namespace std;
int main()
{
    // int x = 2;
    // int n = sizeof(arr) / sizeof(int);
    // int arr[5] = {1, 2, 2, 3, 4};
    // for (int i = 0; i < 6; i++)
    // {
    //     if (arr[i] > x)
    //     {
    //         cout << i;
    //         break;
    //     }
    // }
    int arr[] = {2, 4, 5, 6, 7, 8, 9, 19, 20};
    int target = 8;
    int n = sizeof(arr) / sizeof(int);
    int low = 0;
    int high = n - 1;
    int mid = (high + low) / 2;
    int ans;
    while (high >= low)
    {
        int mid = (high + low) / 2;
        if (arr[mid >= target])
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return n;
}