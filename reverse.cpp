#include <iostream>
using namespace std;
int main()
{
    int N = 873465654;
    int num = N;
    int reverse = 0;
    while (N != 0)
    {
        int digit = N % 10;
        reverse = reverse * 10 + digit;
        N = N / 10;
    }
    cout << reverse;

    return 0;
}