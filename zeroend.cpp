#include <iostream>
using namespace std;
#include <vector>
int main()
{

    int arr[7] = {1, 2, 0, 6, 0, 4, 2};
    // cout << "before" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> temp;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }
    int a = sizeof(arr) / 4;
    int b = temp.size();
    for (int i = 0; i < a - b; i++)
    {
        temp.push_back(0);
    }
    cout << "after" << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << temp[i] << " ";
    }
    return 0;
}