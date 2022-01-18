// Sherlock and divisors

#include <iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long count=0;
      
        for (int i = 1; i <= n; i++)
        {
            if(n%i==0 && i%2==0) count++;
        }
        
        cout<<count<<endl;
    }
}