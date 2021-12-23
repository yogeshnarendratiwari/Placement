// Implementation using array
#include <iostream>
using namespace std;

class ArrayStack
{
private:
    int size;
    int top = -1;
    int *array;

public:
    ArrayStack(int size)
    {
        this->size = size;
        array = new int[size];
    }

    void push(int x)
    {
        if (top == size - 1)
            cout << "Stack Overflow" << endl;
        else
        {
            top++;
            array[top] = x;
        }
    }
    int pop()
    {
        int x = -1;
        if (top == -1)
            cout << "Stack is empty" << endl;
        else
        {
            x = array[top];
            top--;
        }

        return x;
    }

    int stackTop()
    {
        return top == -1 ? -1 : array[top];
    }

    int isEmpty()
    {
        return top == -1 ? 1 : 0;
    }

    int isFull()
    {
        return top == size - 1 ? 1 : 0;
    }

    int peep(int pos)
    {
        int n = top - pos + 1;
        return n < size ? array[n] : -1;
    }

    void print()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << array[i] << " ";
        }
    }
};

int main()
{
    ArrayStack as(5);
    as.push(1);
    as.push(2);
    as.push(3);
    as.push(4);
    as.print();
    cout << endl;
    cout << as.peep(3);
    cout << endl;
    as.pop();
    as.print();
    cout << endl;
    cout << as.stackTop() << endl;
    cout << as.isEmpty() << endl;
    cout << as.isFull() << endl;
}