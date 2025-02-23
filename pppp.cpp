
#include <iostream>
using namespace std;
int main()
{
    int count = 0;

    int n = 1789;
    while (n > 0)
    {

        int last = n % 10;
        cout << last << endl;
        n = n / 10;
        cout << "its me n" << n << endl;
        count = count + 1;
    }

    return count;
}