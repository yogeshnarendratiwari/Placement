#include <iostream>
using namespace std;


int Recursion(int n){
    static int x = 0; // Load in code section
    if(n>0){
       x++;
      return(Recursion(n-1)+x) ;

    }
    
}

int main(){
    
   cout<<Recursion(3);

}