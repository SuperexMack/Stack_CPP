#include <bits./stdc++.h>
using namespace std;

class Stacko
{

public:
    int *arr; // Pointer to an array
    int top;  // this is the top element
    int size;

    Stacko(int size)
    {

        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int a)
    {

        if (size - top > 1)
        {

            top++;
            arr[top] = a;
            cout<<arr[top];


        }

        else
        {

            cout << "Stack is full";
        }
    }

    void pop()
    {

        if (top <= 0)
        {

            cout << "Stack is Empty";
        }

        else
        {

            top--;
        }
    }

    void peek()
    {

        if (top >= 0 && top < size)
        {

            cout << "Peak Element is :"<< arr[top];
        }

        else
        {

            cout << "Stack is empty";
        }
    }

    void isEmpty()
    {

        if (top <= 0)
        {

            cout << "The Stack is Empty";
        }

        else
        {

            cout << "Stack is  not empty";
        }
    }
};

int main()
{


Stacko Mack(5);

Mack.push(23);

cout<<endl;

Mack.push(34);

cout<<endl;

Mack.push(78);

cout<<endl;

Mack.push(98);

cout<<endl;

Mack.push(100);

cout<<endl;



cout<<endl;

// Mack.peek();


Mack.pop();



// Mack.peek();




// Mack.isEmpty();

Mack.pop();
Mack.pop();
Mack.pop();
Mack.pop();
// Mack.peek();

return 0;




}