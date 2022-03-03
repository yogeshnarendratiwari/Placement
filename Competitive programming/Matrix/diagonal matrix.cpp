#include<iostream>
using namespace std;

void set(int A[],int n,int i){
    
         int x;
         cin>>x;
         A[i-1] = x;
    
    
}

int get(int A[],int n,int i,int j){
    if(i==j)
    return A[i-1];
    else
    return 0;
}

int main(){
  int n;
  cin>>n;
  int A[n];
  for (int i = 1; i <= n; i++)
  {
         set(A,n,i);
   
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {

      cout<< get(A,n,i,j)<<" ";
    }
    cout<<endl;
  }
  
  
}