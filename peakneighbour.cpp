#include <iostream>
using namespace std;
// find the element which has lesser neighbours that itself
// check if the first or last element of an array is peak
int peak(int arr[], int n)
{
    if (n == 1)
        return 0;
    if (arr[0] > arr[1])
    {
        return 0;
    }
    if (arr[n - 1] > arr[n - 2])
    {
        return n - 1;
    }
    // chech rest of the array
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
        {
            return i;
        }
    }
}

int main()
{
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "the greater neighbour is " << peak(arr, n);
    return 0;
}