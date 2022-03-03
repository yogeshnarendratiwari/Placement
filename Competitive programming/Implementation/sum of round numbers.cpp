#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long count=0;
        long long countNum = n;
        
        while(countNum){
            int r = countNum%10;
            countNum=countNum/10;
            if(r!=0)
            count++;
        }
        cout<<count<<endl;
          long long e = 0;
        while(n){
            long long r = n%10;
            n=n/10;
            if(r!=0) cout<<r*pow(10,e)<<" ";
            e++;
        }
        cout<<endl;
    }
}