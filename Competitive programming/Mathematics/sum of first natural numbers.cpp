#include<iostream>
using namespace std;

int sum(int n){
    int s=0;
    for (int i = 1; i <= n ; i++)
    {
        s += i;
    }
    return s;
    
}

inline int formula(int n){
    return n*(n+1)/2;
}

int main(){
   cout<<sum(2)<<endl;
   cout<<formula(2)<<endl;
}