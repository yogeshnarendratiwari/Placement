#include <iostream>
#include <random>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
     int x,y;
    if(a<b)
    {
        x = b-1;
        if(n<b)
        y =n-a+1;
        else 
        y=n-a;

    }
    else {
       
        x = a-1;
        if(n<a)
        y =n-b+1;
        else 
        y=n-b;
    }
     if(x>=n/2 && y>=n/2 && a < b)
     {
         cout << a << " ";
         for(int i=0 ; i<n ; i++){
                
         }
     }
     else 
     cout<<"-1"<<endl;

}