#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    int n, tmp;
    string st;
    cin >> n;
    while (n--)
    {
        cin >> st;
        if (st == "push")
        {
            cin >> tmp;
            s.push(tmp);
        }
        else if (st == "top")
        {
            if (!s.empty())
            {
                cout << s.top() << "\n";
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else if (st == "empty")
        {
            cout << s.empty() << "\n";
        }
        else if (st == "pop")
        {
            if (!s.empty())
            {
                cout << s.top() << "\n";
                s.pop();
            }
            else
            {
                cout << -1 << "\n";
            }
        }
        else if (st == "size")
        {
            cout << s.size() << "\n";
        }
    }
}