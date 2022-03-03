#include<iostream>
using namespace std;


int solve(int x,int y,int l,int r){
    int m = max(x,y);
    int k = 1;
    int index= 1;
    while(k<= m){
        if((k&y)!=0 && index>=l && index<=r){
                x = (x|k);
        }
        k= (k<<1);
        index++;
    }
    return x;
}




int main(){
cout<<solve(10,13,2,3);   
}