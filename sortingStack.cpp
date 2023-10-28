#include <bits/stdc++.h>
using namespace std;

void shorting(stack<int> &stack, int topo)
{

    if (stack.empty() || stack.top() < topo)
    {

        stack.push(topo);
        return;
    }

    int n = stack.top();
    stack.pop();

    shorting(stack, topo);

    stack.push(n);
}

void sortStack(stack<int> &stack)
{
    // Write your code here

    if (stack.empty())
    {

        return;
    }

    int topo = stack.top();
    stack.pop();

    sortStack(stack);

    shorting(stack, topo);
}