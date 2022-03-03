#include<iostream>
using namespace std;

int setBit(int num){
    int x = 1;
    int count=0;
    int index=0;
    while(x<=num){
        if((num&x) !=0) count++;
        x = x<<1;
        index++;
    }

    if(count==1)return index;
    return -1;
}

int main(){
 cout<<setBit(16);
}