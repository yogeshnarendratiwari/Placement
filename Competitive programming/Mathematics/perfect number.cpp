#include<iostream>
using namespace std;

bool isPerfectNumber(int n){
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0)
        sum += i ;
    }

    if(sum==2*n)
    return true;
    else
    return false;
    
}
int main(){
cout<<isPerfectNumber(4)<<endl;

// perfect number from 1 to 100
for (int i = 1; i <= 100; i++)
{
    if(isPerfectNumber(i))
    cout<<i<<" ";
}

}