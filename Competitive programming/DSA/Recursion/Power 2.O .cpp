// Power using recursion
#include <iostream>
using namespace std;

int Power(int m,int n){
    if(n==0)
    return 1;
   if(n%2==0) 
   return Power(m*m,n/2);
   else 
   return m*Power(m*m,(n-1)/2);
}

int main(){
 cout<<Power(2,4);
}