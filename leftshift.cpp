#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    int A[n] = {1, 2, 3, 4, 5, 6};
    int temp = A[0];
    for (int i = 1; i < n; ++i)
    {
        A[i - 1] = A[i];
    }
    A[n - 1] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}