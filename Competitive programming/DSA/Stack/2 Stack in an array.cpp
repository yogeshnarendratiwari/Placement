// two stacks in one array

#include <iostream>
using namespace std;

class TwoStackOneArray
{

private:
    int size;
    int top1 = -1;
    int top2 ;
    int *array;

public:
    TwoStackOneArray(int size)
    {
        this->size = size;
        top2 = size;
        array = new int[size];
    }

    void push1(int x)
    {
        if (top1 > top2 - 2)
            cout << "Stack Overflow" << endl;
        else
        {
            top1++;
            array[top1] = x;
        }
    }
    void push2(int x)
    {
        if (top1 > top2 - 2)
            cout << "Stack Overflow" << endl;
        else
        {
            top2--;
            array[top2] = x;
        }
    }

    void pop1()
    {
        if (top1 == -1)
            cout << "Stack underflow" << endl;
        else
        {
            top1--;
        }
    }
    void pop2()
    {
        if (top2 == size)
            cout << "Stack underflow" << endl;
        else
        {
            top2++;
        }
    }
    void print1()
    {
        for (int i = top1; i >= 0; i--)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    void print2()
    {
        for (int i = top2; i <= size - 1; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    TwoStackOneArray tsoa(100);
    tsoa.push1(1);
    tsoa.push1(2);
    tsoa.push2(5);
    tsoa.push2(6);
    tsoa.print1();
    tsoa.print2();
}