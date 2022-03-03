#include<iostream>
#include <cmath>
using namespace std;

typedef long long var;

var sum(var n,var a,var r){
      var s=0;
    var add;
      for (var i = 1,add=a; i <=n; i++,add *= r)
      {
          s += add;
      }
      return s;
}

inline var formula(var n,var a,var r){
    return a*(pow(r,n)-1)/(r-1);
}

int main(){
    cout<<sum(2,1,2)<<endl;
    cout<<formula(2,1,2)<<endl;
}