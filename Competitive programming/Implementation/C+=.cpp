#include<iostream>
using namespace std;

int CNew(int a,int b,int n){
   
   int value = a+b;
   int larger = b;
   int count=1;
   while(value<=n){
       int temp = value;
       value= value+larger;
       larger = temp;
       count++;
   }
   return count;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int a,b,n;
    cin>>a>>b>>n;
       cout<<CNew(min(a,b),max(a,b),n)<<endl; 
    }
    
    
}