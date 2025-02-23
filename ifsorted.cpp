#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    int a[n] = {1, 2, 3, 4, 5, 0};
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] >= arr[i - 1])
    //     {
    //             }
    //     else
    //     {
    //         return false;
    //     }
    // }
    // return true;
    bool isSorted = false;
    for (int i = 0; i < n - 1; i++)

    {
        if (a[i] <= a[i + 1])
        {
            isSorted = true;
        }
        else
        {
            isSorted = false;
            break;
        }
    }
    return isSorted;
}