#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    
    int min;
    if(a<b && a<c)
    min=a;
    else if(b > c)
    min = c;
    else 
    min=b;
    
     int max;
    if(a>b && a>c)
    max=a;
    else if(b > c)
    max = b;
    else 
    max=c;
    
    cout<<max-min<<endl;
    
    
    
    

    
    
}