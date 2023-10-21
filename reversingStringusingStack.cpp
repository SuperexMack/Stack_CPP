#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;

    cout << "Enter the value of the string :" << endl;
    cin >> str;

    stack<char> mack;

    for (int i = 0; i < str.length(); i++)
    {

        char ch = str[i];
        cout << ch;
        mack.push(ch);
    }

    cout << endl;

    string ans;

    while (!mack.empty())
    {

        int b = mack.top();
        ans.push_back(b);
        mack.pop();
    }

    cout << ans;

    return 0;
}