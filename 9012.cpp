#include <iostream>
#include <string>
#include <stack>
using namespace std;

string isVPS(string s)
{
    stack<char> st;
    for (const char &c : s)
    {
        if (c == '(')
        {
            st.push(c);
        }
        else
        {
            if (!st.empty())
            {
                st.pop();
            }
            else
            {
                return "NO\n";
            }
        }
    }
    if (!st.empty())
    {
        return "NO\n";
    }
    else
    {
        return "YES\n";
    }
}

int main()
{
    int n;
    string s, ans = "";
    stack<char> st;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        cin >> s;
        ans += isVPS(s);
    }
    cout << ans;
}