// Restaurant

#include <iostream>

using namespace std;

int gcd(int a,int b){
   
    
    if(b==0)
    return a;
   else
      gcd(b,a%b);
      
}

int main(){
   
int t;
cin>>t;
while(t--){
long long l,b;
cin>>l>>b;

cout<<(l*b)/(gcd(l,b)*gcd(l,b))<<endl;

}
}
