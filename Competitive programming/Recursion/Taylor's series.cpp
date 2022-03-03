// Taylors series e^x using recursion
#include <iostream>
using namespace std;

int TaylorsSeries(int x,int n){
   static int p = 1 ,f=1;
   int r;
   if(n==0)
   return 1;
   else {
    r = TaylorsSeries(x,n-1);
    p = p*x;
    f = f*n;
    return r+p/f;
   }
}

int main(){
 cout << TaylorsSeries(1,2);
}       