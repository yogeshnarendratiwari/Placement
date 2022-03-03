#include<iostream>
#include <algorithm>
using namespace std;

int solve(int a,int b){
  if(a<0)
  a = -a
  if(a<b)
  return 0;
  else if(a==b)
  return 1;
  else{  
  a=(a&b);
  a=(a|b);
  return a;
  }
}

int main(){
cout<<solve(89,-29);
}