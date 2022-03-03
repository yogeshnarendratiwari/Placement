#include <iostream>
using namespace std;


void Recursion(int n){
    if(n>0){
        cout<<n<<" ";
        Recursion(n-1);
    }
    
}

int main(){
    
    Recursion(3);

}