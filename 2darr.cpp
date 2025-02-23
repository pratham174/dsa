#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter m";
    cin >> m;
    cout << "enter n";
    cin >> n;
    cout << "enter arr" << endl;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "printing arr" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}