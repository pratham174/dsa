#include <iostream>
using namespace std;
#include <vector>
#include <map>
vector<int> duplicate(const int arr[], int n)
{
    vector<int> v;
    map<int, int> m;
    int cnt = 0;
    // int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (const auto &it : m)
    {
        if (it.second > 1)
        {
            v.push_back(it.first);
        }
    }
    return v;
}
int main()
{
    int arr[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    vector<int> dup = duplicate(arr, 10);
    for (int i = 0; i < dup.size(); i++)
    {
        cout << dup[i] << " ";
    }
    return 0;
}