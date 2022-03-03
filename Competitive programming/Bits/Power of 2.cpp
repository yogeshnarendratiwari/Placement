#include<iostream>
using namespace std;

void solve(int num){
    int count=0;
    int x = 1;
    while(x<=num){
        if((num&x)!=0) count++;
        x = x<<1;
    }
    count==1 ? cout<<"Yes"<<endl : cout<<"No"<<endl;
}

int main(){
solve(98);
}