#include <bits/stdc++.h>
using namespace std;

void length(stack<int> &str, int count, int size)
{

    // base case

    if (count == size / 2)
    {

        str.pop();
        return;
    }

    int ans = str.top();
    str.pop();

    length(str, count + 1, size);

    str.push(ans);
}

int main()
{

    stack<int> str;

    str.push(10);
    str.push(23);
    str.push(24);
    str.push(17);
    str.push(12);

    int c = str.size();
    int count = 0;

    length(str, count, c);

    cout << "After Deleting the MiddleTerm the stack is :" << endl;

    while (!str.empty())
    {

        int fact = str.top();

        cout << fact << endl;

        str.pop();
    }

    return 0;
}