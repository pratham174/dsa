#include <iostream>
using namespace std;
#include <stack>
int main()
{
    stack<string> st;

    string str = "reverse this string";
    str += " ";
    string tempstr = "";
    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] == ' ')
        {
            st.push(tempstr);
            tempstr = "";
        }
        else
        {
            tempstr += str[i];
        }
    }
    // string ans = "";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}