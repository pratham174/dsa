#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int val = 1;
    for (int i = n; i >= 1; i--)
    {
        val *= i;
    }
    cout << val;
    return 0;
}