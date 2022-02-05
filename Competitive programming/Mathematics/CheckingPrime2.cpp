#include <iostream>
#include <cmath>
using namespace std;

void checkPrime(int n){
 
  bool B[n+1];
  B[0] = false;
  B[1] = false;
  for (int i = 2; i <= n; i++)
  {
      B[i] = true;
  }
  for (int i = 2; i<= sqrt(n) ; i++)
  {
      int x = 2;
      int j = 2 * i;
      while (j<= n)
      {
          B[j] = false;
          j = x*i;
          x = x + 1;
      }
      
      
  }
  for (int i = 1; i <= n; i++)
  {
     if(B[i]==true)
     cout << i << endl;
  }
  
  
  

   


}


int main(){
    int n;
    cin>>n;
    checkPrime(n);
}