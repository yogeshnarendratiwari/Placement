#include <iostream>
using namespace std;

int x = 0; // Load in code section
int Recursion(int n){
    
    if(n>0){
       x++;
      return(Recursion(n-1)+x) ;

    }
    
}

int main(){
    
   cout<<Recursion(3);

}