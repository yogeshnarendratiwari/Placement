// reversing a number with a condition
// if --> 9-t <= t ==> t = 9-t;
// else t=t;

#include<iostream>
using namespace std;

long long reverse(int n)
{
    if(n<10)return n;
    long long newNum = 0;
    while (n>10)
    {
        long long r = n%10;
        n=n/10;
        if(9-r <= r) r = 9-r;

    newNum = newNum*10 + r;   
    }
    newNum = newNum*10 + n;   

    return newNum;
}

int main(){
      long long n;
      cin>>n;
      n=reverse(n);
      cout<<reverse(n)<<endl;
      return 0;
}