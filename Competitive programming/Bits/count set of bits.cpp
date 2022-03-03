#include<iostream>
using namespace std;

int solve(int num){
    int x = 1;

    int count=0;

    while(x<=num){
       if((num&x) !=0 ) count++;
       x = x<<1;
    }
    return count;
    
}


int main(){
   cout<<solve(13);
}