#include<iostream>
using namespace std;

typedef long long var;

var solve(var n){
    var count=0,temp=n,last=n%10;
    while(temp>0){
        count++;
        temp /= 10;
    }
    cout<<10*(last-1) + count*(count+1)/2<<endl;

}

int main(){
    var t;
    cin>>t;
    while(t--){
        var n;
        cin>>n;
        solve(n);
    }

}