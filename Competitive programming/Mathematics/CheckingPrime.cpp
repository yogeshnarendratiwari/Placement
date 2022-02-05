#include <iostream>
#include <cmath>
using namespace std;

void checkPrime(int n){
 
  for (int i = 2; i <= sqrt(n); i++)
  {
    if(n%i == 0)
    {
        cout <<"No it is not a prime number"<<endl;
        return;
    }
  }
  cout <<"Yes it is a prime number"<<endl;
  return;

   


}


int main(){
    int n;
    cin>>n;
    checkPrime(n);
}