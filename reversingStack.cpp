// Note Down the Alogrithm - 

// step 1 -> first write the code of adding the element to the end of the stack(inside a function)
// step 2 -> then write down a function in which you will take out the top element of a stack and then use step1 or first function to store that element to the end and so only this baaki kaam recursion kudh kar lega






#include <bits/stdc++.h>
using namespace std;

void mycode(stack<int> &str, int x)
{

    // Base Case

    if (str.empty())
    {

        str.push(x); // using this we are inserting the element in a array when the array is empty

        return;
    }

    int ans = str.top();
    str.pop();

    mycode(str, x); // using this we are using recursion

    str.push(ans);


}




void reverseStack(stack<int> &stack)
{

    // Base case

    if (stack.empty())
    {

        return;
        
    }

    int topo = stack.top();
    stack.pop();

    reverseStack(stack);

    mycode(stack, topo);


}





int main()
{

    stack<int> str;

    str.push(34);
    str.push(678);
    str.push(12);
    str.push(765);
    str.push(89);

    reverseStack(str); // so using this we had reversed the stack

    while (!str.empty())
    {

        int joke = str.top();
        cout << joke << endl;
        str.pop();
    }

    return 0;
}