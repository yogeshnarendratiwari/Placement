// Power using recursion
#include <iostream>
using namespace std;

int Power(int m,int n){
    if(n==0)
    return 1;
    return Power(m,n-1)*m;
}

int main(){
 cout<<Power(2,2);
}