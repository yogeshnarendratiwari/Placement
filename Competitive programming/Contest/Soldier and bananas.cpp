// Soldier and bananas 

#include <iostream>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    if(k>=1 && k<=1000 && n>=0 && n<=1000000000 && w>=1 && w<=1000){
        int total = (k * w * (w+1))/2;
        if(total > n)
        cout<<total - n<<endl;
        else
        cout<<"0"<<endl;
    }
}