#include<iostream>
using namespace std;


inline int solve(int a,int b){
    return a>b ? a : b;
}

int main(){
    cout<<solve(5,4);
}