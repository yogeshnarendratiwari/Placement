#include <iostream>
using namespace std;

int Recursion(int n){ // n load in stack frame / activation record of Recursion function
    
    if(n>0){
      
      return(Recursion(n-1)+n) ;

    }
    
}

int main(){
    
   cout<<Recursion(3);

}