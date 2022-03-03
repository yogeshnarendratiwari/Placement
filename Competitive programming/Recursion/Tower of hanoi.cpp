#include <iostream>
using namespace std;


void TowerOfHanoi(int n,int a,int b,int c){
    if(n>0){
        TowerOfHanoi(n-1,a ,c ,b);
         cout<< a << " to " << c<<endl;
        TowerOfHanoi(n-1,b ,a ,c);
    }
}

int main(){
    TowerOfHanoi(3,1,2,3);

}