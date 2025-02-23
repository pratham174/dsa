#include <iostream>
using namespace std;
int Binary(int *arr, int t, int start, int end)
{

    while (start <= end)
    {
        int mid = (start + end) / 2;
        // int mid = start + (start - end) / 2;

        if (arr[mid] == t)
        {

            cout << "elemnt found at " << mid;
            break;
        }
        if (arr[mid] > t)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    // if (start > end)
    // {
    //     cout << "element not found" << endl;
    // }
}
int main()
{
    // int target = 86;
    int arr[] = {3, 4, 6, 7, 9, 12, 16, 17};
    int start = 0;
    int n = sizeof(arr) / sizeof(int);
    int end = n - 1;
    // int mid = (start + end) / 2;
    // int mid = start + (start - end) / 2;
    Binary(arr, 12, start, end);
    return 0;
}
