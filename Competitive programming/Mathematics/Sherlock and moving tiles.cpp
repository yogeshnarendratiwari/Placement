// Sherlock and moving tiles

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double l,s1,s2;
    cin>>l>>s1>>s2;
    int Q;
    cin>>Q;

    while(Q--){
        int a;
        cin>>a;
        cout<< sqrt(2) * (abs(l-sqrt(a))/abs(s1-s2))<<endl;
    }
}