#include<iostream>
using namespace std;

long long OctalToDecimal(int n){
    long long result=0;
    long long base = 1;
    while (n>0)
    {
        result += (n%10) *base;
        n = n/10; 
        base *= 8;
    }
    return result;
}

int main(){
cout <<OctalToDecimal(17);
}