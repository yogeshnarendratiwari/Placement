#include<iostream>
using namespace std;
typedef long long var;
void solve(var cube){
    var result = 0;
    var sum = 0;
    var i = 1;
    while(result<=cube){
        sum += i;
        result += sum;
        i++;
    }
    cout<<i-2<<endl;
}

int main(){
  int n;
  cin>>n;
  solve(n);
}