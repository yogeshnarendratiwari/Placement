// Indirect Recursion or cyclic recursion
#include <iostream>
void funA(int);
void funB(int);

void funB(int n){
    if(n>1){
        std:: cout<<n<<" ";
        funA(n/2);
    }
}

void funA(int n){
    if(n>0){
       std:: cout<<n<<" ";
       funB(n-1);
    }
}


int main(){
    funA(20);
}