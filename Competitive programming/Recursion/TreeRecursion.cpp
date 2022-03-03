#include <iostream>
using namespace std;


void TreeRecursion(int n){
    if(n>0){
        cout<<n<<" ";
        TreeRecursion(n-1);
        TreeRecursion(n-1);
    }
    
}

int main(){

    TreeRecursion(3);

}