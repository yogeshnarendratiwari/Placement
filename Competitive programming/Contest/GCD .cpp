// GCD

#include <iostream>
using namespace std;

long long gcd(long long a,long long b){
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}

void result(long long n){
    long long a,b,c=1;
    for(long long i=1 ; i<=n; i++){
            b = i;
            a = n-1-b;
            if(gcd(a,b)==1 && a!=b && b!=1 && a!=1){
            cout<<a<<" "<<b<<" "<<1<<endl;
             return;
            }
        }
    
}

int main(){
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    result(n);
}
}