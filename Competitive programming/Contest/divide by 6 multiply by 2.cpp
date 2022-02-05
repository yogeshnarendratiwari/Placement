#include<iostream>
#include <cmath>
using namespace std;

int main(){


 int t;
 cin>>t;
 while (t--)
 {
     long long n;
     cin>>n;
      long long m = n;
      int count2=0;
      while (m>1)
      {
         if(m%2==0){
          m = m/2;
          count2++;
          }
          else{
              break;
          }
      }
      m = n;
      int count3=0;
      while (m>1)
      {
          if(m%3==0){
          m = m/3;
          count3++;
          }
          else{
              break;
          }
      }
      if(n==1){
          cout<<0<<endl;
          continue;
      }
      if(count3>=count2 && count2!=0 && count3!=0)
      cout<<2*count3 - count2<<endl;
      else if(count2==0 || count3 == 0 || count2>count3)
      cout<<-1<<endl;
      
      
 }
}