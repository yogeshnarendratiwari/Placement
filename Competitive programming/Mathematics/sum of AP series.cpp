#include<iostream>
using namespace std;


int sum(int n,int a,int d){
    int s = 0;
    int i,x;
    for (i = 1, x = a; i <= n ; i++,x += d)
    {
      s += x;

    }
    return s;
    
}

inline int formula(int n,int a,int d){
    return n/2*(2*a+(n-1)*d);
}



int main(){
  cout<<sum(4,2,2)<<endl;
  cout<<formula(4,2,2)<<endl;
}