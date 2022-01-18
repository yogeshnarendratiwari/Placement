// Fibonacci series

#include <iostream>
using namespace std;

int FiboUsingLoop(int n)
{
    int t0 = 0, t1 = 1, s = 0;
    if (n <= 1)
        return n;
    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int FiboUsingRecursion(int n)
{
   if(n<=1)
   return n;

   return FiboUsingRecursion(n-2) + FiboUsingRecursion(n-1);
}

int F[1000];
int FiboUsingMemoization(int n)
{
   if(n<=1){
       F[n]=n;
       return n;
   }
   else{

        if(F[n-2]==-1)
        F[n-2] = FiboUsingMemoization(n-2);
        if(F[n-1]==-1)
        F[n-1] = FiboUsingMemoization(n-1);
        return F[n-2] + F[n-1];
      
   }
}

int main()
{
    cout << FiboUsingLoop(4) << endl;
    cout << FiboUsingRecursion  (4) << endl;
    for (int i = 0; i < 1000; i++)
    {
       F[i]=-1;
    }
    
    cout << FiboUsingMemoization  (4) << endl;
}