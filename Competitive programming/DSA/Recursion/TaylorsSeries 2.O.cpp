// Taylors series e^x using recursion
#include <iostream>
using namespace std;

float TaylorsSeriesLoop(float x,int n){
   int s = 1;
   for(;n>0;n--){
      s = (1+((x/n)*s));
   }
   return s;
}
float TaylorsSeriesRecursion(float x,int n){
     static int s=1;
   if(n==0)
   return s;
   s = (1+((x/n)*s));
    return TaylorsSeriesRecursion(x,--n);
}

int main(){
 cout << TaylorsSeriesLoop(1.0f,2);
 float ans =  TaylorsSeriesRecursion(1.0f,2);
 cout<<ans;
}       



