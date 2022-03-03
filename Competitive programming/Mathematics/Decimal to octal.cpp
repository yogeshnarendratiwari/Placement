#include<iostream>
using namespace std;

int DecimalToOctal(int n){
    int result=0;
    while (n>0)
    {
        int r = n%8;
        n=n/8;
        result = result*10 + r;
    }
    int newResult = 0;
    while (result>0)
    {
        newResult = newResult*10+ result%10;
        result /= 10;
    }
    return newResult;
    
}

int main(){
cout <<DecimalToOctal(15);
}