#include <iostream>
using namespace std;
int isf(int matx[][3], int t, int i, int j)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matx[i][j] == t)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
    }
}
int main()
{
    int matx[3][3];
    cout << "type arr" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matx[i][j];
        }
    }
    cout << "your arr is" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matx[i][j] << " ";
        }
        cout << endl;
    }
    int t;
    cout << "enter the trget:";
    cin >> t;
    if (isf(matx, t, 3, 3))
    {
        cout << "found target";
    }
    else
    {
        cout << "not found";
    }

    return 0;
}