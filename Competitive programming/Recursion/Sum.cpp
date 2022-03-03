// Sum of first n natural numbers
#include <iostream>
using namespace std;


int Sum(int n){
    if(n==0)
    return 0;
    else
    return Sum(n-1)+n;
}

int main(){

cout<<Sum(2)<<endl;
}