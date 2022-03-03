 // Exciting bets

#include <iostream>
using namespace std;


long long gcd(long long a,long long b){
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int main (){
    long long t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long maxExcitement = abs(a-b);
        
        if(a==0 || b==0){
          cout<<maxExcitement<<" "<<0<<endl;
        }
      else if(maxExcitement==0){
            cout<<"0 0"<<endl;
        }
        else if(maxExcitement==1){
            cout<<"1 0"<<endl;
        }
        else {
            long long numberOfMoves = min(a%maxExcitement,maxExcitement-a%maxExcitement);
           cout<<maxExcitement<<" "<<numberOfMoves<<endl;
        }
    }
}