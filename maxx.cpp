#include <iostream>
using namespace std;
int main()
{
    int maxi = 0;
    int count = 0;
    int arr[] = {0, 1, 1, 1, 2, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1};
    // int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            maxi = max(maxi, count);
        }
        else
        {
            count = 0;
        }
        // max = count;
    }
    cout << maxi;
    return 0;
}