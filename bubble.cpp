#include <iostream>
using namespace std;
void bulbul(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j + 1];
                A[j + 1] = A[j];
                A[j] = temp;
            }
        }
    }
}
void printarr(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
int main()
{
    int n = 6;
    // cout << n;
    int A[]{4, 5, 2, 1, 6, 3};

    cout << "before sorting" << endl;
    printarr(A, n);
    cout << endl;
    bulbul(A, n);
    cout << "after sorting" << endl;
    printarr(A, n);
    return 0;
}