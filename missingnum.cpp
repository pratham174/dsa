#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> nums{1, 2, 4, 5, 6, 8};
    int n = nums.size();
    // cout << n;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1] + 1)
        {
        }
        else
        {
            cout << nums[i] - 1 << " ";
        }
    }

    return 0;
}