// Implementation using linked list
#include <iostream>
using namespace std;

class LinkedListStack
{
private:
    int data;
    LinkedListStack *next;
    LinkedListStack *Top = NULL;
public:
    void push(int x)
    {

        LinkedListStack *t = new LinkedListStack;
        if (t == NULL)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            t->data = x;
            t->next = Top;
            Top = t;
        }
    }

    int pop()
    {
        int x = -1;
        LinkedListStack *f;
        if (Top == NULL)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            f = Top;
            Top = Top->next;
            x = f->data;
            delete (f);
        }
        return x;
    }
 
   int peek(int pos){
       
       LinkedListStack * p = Top;
       for(int i=0 ; i<pos-1 && p!=NULL ; i++){
            p = p->next;
       }
       if(p!=NULL)
       return p->data;
       else
       return -1;
   }

   int StackTop(){
       return Top ? Top->data : -1;
   }

   int isEmpty(){
       return Top ? 0 : 1;
   }

   int isFull(){
       LinkedListStack *t = new LinkedListStack;
       return t ?  0 : 1;
   }

    void print()
    {
        LinkedListStack *p = Top;
        while (p != NULL)
        {
            cout << p->data << " ";
            p = p->next;
        }
    }
};

int main()
{
    LinkedListStack lls;
    lls.push(8);
    lls.push(12);
    lls.print();
    cout<<endl;
    lls.pop();
    lls.print();
    lls.push(8);
    lls.push(12);
    lls.push(16);
    lls.push(14);
    lls.print();
    cout<<endl;
    cout<<lls.peek(3)<<endl;
    cout<<lls.isEmpty()<<endl;
    cout<<lls.isFull()<<endl;
}