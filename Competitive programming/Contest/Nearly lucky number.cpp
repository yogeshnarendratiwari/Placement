// Nearly lucky number

#include <iostream>
using namespace std;
int main(){

    long long l;
    cin>>l;
   int countLucky =0;
    while (l>0)
    {

        if(l%10 == 4 || l%10== 7 ){
          cout<<countLucky<<endl;
        }


        l=l/10;

       
    }
  if(countLucky==4 || countLucky ==7)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
    
}