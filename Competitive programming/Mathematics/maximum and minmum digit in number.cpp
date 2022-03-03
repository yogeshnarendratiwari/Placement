#include<iostream>
using namespace std;

void solve(int num){
    int ma=INT16_MIN;
    int mi=INT16_MAX;

    while(num>0){
        ma = max(ma,num%10);
        mi = min(mi,num%10);
        num /= 10;
    }
    cout<<ma<<" "<<mi<<endl;
}

int main(){
solve(123);
}