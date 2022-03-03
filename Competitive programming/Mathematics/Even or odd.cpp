#include<iostream>
using namespace std;
typedef int var;
inline string even_or_odd (var n){
    return n%2==0 ? "Even" : "Odd";
}
int main(){
       var n = 5;
       cout<<even_or_odd(n);
}