#include<iostream>
#include <cmath>
using namespace std;

int BinaryToDecimal(int n){
    int result = 0;
    int base = 1;
    while (n>0)
    {  if(n%10==1)
        result += base;
        n=n/10;
        base *= 2;
    }
    return result;
    
}


int main(){
  cout<<BinaryToDecimal(1011);
}