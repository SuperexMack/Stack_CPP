#include <bits/stdc++.h>
using namespace std;
class TwoStack
{

public:
    int *arr;
    int top1;
    int top2;
    int s;

    TwoStack(int s)
    {

        this->s = s;
        arr = new int[s];
        top1 = -1;
        top2 = s;
    }

    // Push in stack 1.
    void push1(int num)
    {

        if (top2 - top1 > 1)
        {

            top1++;
            arr[top1] = num;
            cout << arr[top1];
        }
    }

    void push2(int num)
    {

        if (top2 - top1 > 1)
        {

            top2--;
            arr[top2] = num;
            cout << arr[top2];
        }
    }

    int pop1()
    {

        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }

        else
        {

            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2()
    {

        if (top2 < s)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }

        else
        {

            return -1;
        }
    }
};

int main()
{

    TwoStack Mack(8);

    Mack.push1(3);

    cout << endl;

    Mack.push1(34);

    cout << endl;

    Mack.push2(99);

    cout << endl;

    Mack.pop2();
}
