#include<iostream>
using namespace std;

int gcd1(int a,int b){
    if(a==b)
    return a;
    else if(a>b)
    return gcd1(a-b,b);
    else 
    return gcd1(a,b-a);
}

int gcd2(int a,int b){
    if(b==0)
        return a;

    else
    return gcd2(b,a%b);    
}

int main(){
cout<<gcd1(9,3);
cout<<gcd2(9,3);

}