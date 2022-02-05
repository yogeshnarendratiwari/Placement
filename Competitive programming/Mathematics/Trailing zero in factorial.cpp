#include <iostream>
using namespace std;

int trailingZeros(int n){
    
    int res = 0;
    for (int i = 5; i <= n; i*=5)
    {
        res += n/i;
    }
    
    return res;

    
}

int main(){
    int n;
    cin>>n;
   cout<< trailingZeros(n);
}