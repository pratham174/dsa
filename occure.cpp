#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 1, 2, 3, 3, 4, 4};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == num)
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << num;
        }
    }

    return 0;
}