// Pizza Forces

#include <iostream>
using namespace std;
int main (){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n<6 && n>0){
            cout<<"15"<<endl;
        }
        else if(n>=6 && n%2==0){
            cout<<(5*n)/2<<endl;
        }
        else {
            cout<<(5*(n+1))/2<<endl;
        }
    }
}